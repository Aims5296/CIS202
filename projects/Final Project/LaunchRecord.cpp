#include <iostream>
#include <fstream>
#include <sstream>
#include "LaunchRecord.h"

/* 
    File: LaunchRecord.cpp
    Description: Function definitions for the LaunchRecord Class
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/25
*/

// this constructor is basically one big setter function for all variables in LaunchRecord.
LaunchRecord::LaunchRecord(const vector<string>& fields) {
    if (fields.size() >= 11) {
        flightNo = stoi(fields[0]);
        date = fields[1];
        time = fields[2];
        versionBooster = fields[3];
        launchSite = fields[4];
        payload = fields[5];
        payloadMass = fields[6];
        orbit = fields[7];
        customer = fields[8];
        launchOutcome = fields[9];
        boosterLanding = fields[10];
    }
}

// References the ostream helper function to print all flight data
void LaunchRecord::display() const {
    cout << *this;
}

