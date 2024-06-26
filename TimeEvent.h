#pragma once
// TimeEvent.h
#define TIME_EVENT_H

#include <string>

class Time {
public:
    Time();
    Time(int hours, int minutes);
    void setTime(int hours, int minutes);
    void getTime(int& hours, int& minutes);
    void printTime();
    void incrementHours();
    void incrementMinutes();

private:
    int hr;
    int min;
};

class Date {
public:
    Date();
    Date(int month, int day, int year);
    void setDate(int month, int day, int year);
    void getDate(int& month, int& day, int& year);
    void printDate();

private:
    int month;
    int day;
    int year;
};

class Event {
public:
    Event(int hours = 0, int minutes = 0, int m = 1, int d = 1, int y = 1900, string name = "Role Play");
    void setEventData(int hours, int minutes, int m, int d, int y, string name);
    void printEventData();

private:
    string eventName;
    Time eventTime;
    Date eventDay;
};


