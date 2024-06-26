// TimeEvent.cpp
#include "TimeEvent.h"
#include <iostream>
using namespace std;
// Implementation of Time class methods
Time::Time() : hr(0), min(0) {}

Time::Time(int hours, int minutes) : hr(hours), min(minutes) {}

void Time::setTime(int hours, int minutes) {
    hr = hours;
    min = minutes;
}

void Time::getTime(int& hours, int& minutes) {
    hours = hr;
    minutes = min;
}

void Time::printTime() {
    cout << hr << ":" << (min < 10 ? "0" : "") << min;
}

void Time::incrementHours() {
    hr = (hr + 1) % 24;
}

void Time::incrementMinutes() {
    min = (min + 1) % 60;
    if (min == 0) {
        incrementHours();
    }
}

// Implementation of Date class methods
Date::Date() : month(1), day(1), year(1900) {}

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

void Date::setDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::getDate(int& m, int& d, int& y) {
    m = month;
    d = day;
    y = year;
}

void Date::printDate() {
    cout << month << "/" << day << "/" << year;
}

// Implementation of Event class methods
Event::Event(int hours, int minutes, int m, int d, int y, string name)
    : eventName(name), eventTime(hours, minutes), eventDay(m, d, y) {}

void Event::setEventData(int hours, int minutes, int m, int d, int y, string name) {
    eventName = name;
    eventTime.setTime(hours, minutes);
    eventDay.setDate(m, d, y);
}

void Event::printEventData() {
    cout << "Event: " << eventName << endl;
    cout << "Time: ";
    eventTime.printTime();
    cout << "\nDate: ";
    eventDay.printDate();
    cout << endl;
}

