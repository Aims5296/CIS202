#include <iostream>
#include <vector>
#include <string>
#include "search.h"

/* 
    File: search.cpp
    Description: Function definitions for the search class
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/2025
*/

// searches for records based on customer and prints the data
void searchByCustomer(const vector<LaunchRecord>& records, const string& customer) {
    for (const auto& record : records) {
        if (record.getCustomer().find(customer) != string::npos) {
            record.display();
        }
    }
}

// searches for records based on launch outcome and prints the data
void searchByOutcome(const vector<LaunchRecord>& records, const string& outcome) {
    for (const auto& record : records) {
        if (record.getLaunchOutcome().find(outcome) != string::npos) {
            record.display();
        }
    }
}

// searches for records based on launch site and prints the data
void searchBySite(const vector<LaunchRecord>& records, const string& site) {
    for (const auto& record : records) {
        if (record.getLaunchSite().find(site) != string::npos) {
            record.display();
        }
    }
}

// searches for records based on booster landing type and prints the data
void searchByLanding(const vector<LaunchRecord>& records, const string& landing) {
    for (const auto& record : records) {
        if (record.getBoosterLanding().find(landing) != string::npos) {
            record.display();
        }
    }
}

