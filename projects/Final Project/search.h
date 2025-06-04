#ifndef SEARCH_H
#define SEARCH_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "LaunchRecord.h"

using namespace std;

/* 
    File: search.h
    Description: Function declarations for search class
    Author: Andrew Klopping
    Email: Andrewk4140@student.vvc.edu
    Course#: cis202
    Section#: 30001
    Date: 6/3/25
*/

void searchByCustomer(const vector<LaunchRecord>& records, const string& customer);
void searchByOutcome(const vector<LaunchRecord>& records, const string& outcome);
void searchBySite(const vector<LaunchRecord>& records, const string& site);
void searchByLanding(const vector<LaunchRecord>& records, const string& landing);


#endif // SEARCH_H
