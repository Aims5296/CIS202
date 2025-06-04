#ifndef LAUNCH_RECORD_H
#define LAUNCH_RECORD_H

#include <string>
#include <vector>
using namespace std;

/* 
    File: LaunchRecord.h 
    Description: Function declarations for the LaunchRecord class.
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/25
*/

class LaunchRecord {

    // private variable declarations
    int flightNo;
    string date;
    string time;
    string versionBooster;
    string launchSite;
    string payload;
    string payloadMass;
    string orbit;
    string customer;
    string launchOutcome;
    string boosterLanding;

public:

    //start of function declarations
    LaunchRecord(const vector<string>& fields);
    void display() const;
    
    // getter functions
    int getFlightNo() const { return flightNo; }
    const string& getCustomer() const { return customer; }
    const string& getLaunchOutcome() const { return launchOutcome; }
    const string& getDate() const { return date; }
    const string& getTime() const { return time; }
    const string& getVersionBooster() const { return versionBooster; }
    const string& getLaunchSite() const { return launchSite; }
    const string& getPayload() const { return payload; }
    const string& getPayloadMass() const { return payloadMass; }
    const string& getOrbit() const { return orbit; }
    const string& getBoosterLanding() const { return boosterLanding; }
    
    // prints all flight data for a given flight record
    friend ostream& operator<<(ostream& os, const LaunchRecord& record) {
	    os << "Flight " << record.flightNo << ": "
           << record.date << " " << record.time 
           << " | Customer: " << record.customer 
           << " | Outcome: " << record.launchOutcome 
           << " | Booster Landing: " << record.boosterLanding 
           << " | Launch Site: " << record.launchSite << "\n";
	    return os;
    }
};



#endif
