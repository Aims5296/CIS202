#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "file_utils.h"
#include "LaunchRecord.h"

using namespace std;

/* 
    File: file_utils.cpp
    Description: Function definitions for file_utils class
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/25
*/

vector<string> parseCSVLine(const string& line) {
    vector<string> result;
    string token;
    bool inQuotes = false;

    for (size_t i = 0; i < line.length(); ++i) {
        char c = line[i];

        if (c == '"') {
            inQuotes = !inQuotes;
        } else if (c == ',' && !inQuotes) {
            result.push_back(token);
            token.clear();
        } else {
            token += c;
        }
    }
    result.push_back(token);
    return result;
}


vector<LaunchRecord> loadLaunchRecords(const string& filename) {
    vector<LaunchRecord> records;
    ifstream file(filename);
    string line;
    bool firstLine = true;

    while (getline(file, line)) {
        if (firstLine) {
            firstLine = false;
            continue;
        }
        vector<string> fields = parseCSVLine(line);
        records.emplace_back(fields);
    }

    return records;
}
