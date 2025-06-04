#include <iostream>

#include "LaunchRecord.h"
#include "file_utils.h"
#include "search.h"

using namespace std;

/* 
    File: main.cpp 
    Description: Loads in launch records from spacex.csv then prints out the records filtered by 
                 customer name, launch outcome, launch site, and booster landing type.
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/25
*/

void print_all(const vector<LaunchRecord>& records) {
    for (const auto& record : records) {
	cout << record << endl;
    }
}

int main() {
    vector<LaunchRecord> records = loadLaunchRecords("spacex.csv");

    // Prints records based on inputted customer name.
    string input;
    cout << "Enter customer name to search: ";
    getline(cin, input);
    searchByCustomer(records, input);

    // Prints records based on inputted launch outcome
    cout << "\nEnter launch outcome to search: ";
    getline(cin, input);
    searchByOutcome(records, input);

    // Prints records based on inputted launch site
    cout << "\nEnter launch site to search: ";
    getline(cin, input);
    searchBySite(records, input);

    // Prints records based on inputted booster landing type
    cout << "\nEnter booster landing to search: ";
    getline(cin, input);
    searchByLanding(records, input);

    return 0;
}
