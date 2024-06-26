// main.cpp
#include "TimeEvent.h"
#include<iostream>
using namespace std;
int main() {
    // Create events using the classes to demonstrate composition
    Event event1(10, 30, 12, 02, 2005, "Birthday");
    Event event2(12, 45, 11, 27, 2023, "Role Play");

    // Print event information
    cout << "Event 1:"<< endl;
    event1.printEventData();

    cout << "Event 2:"<<endl;
    event2.printEventData();
    return 0;
}
