#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include <vector>
#include <string>
#include "LaunchRecord.h"

using namespace std;

/* 
    File: file_utils.h
    Description: Function declarations for the file_utils class
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/2025
*/

vector<string> parseCSVLine(const string& line);
vector<LaunchRecord> loadLaunchRecords(const string& filename);

#endif // FILE_UTILS_H
