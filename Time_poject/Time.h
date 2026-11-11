// this is the header file

#ifndef TIME_H
#define TIME_H


class Time{
public:
    // constructor declaration
    // it is just like saying "My class has a constructor called Time()"
    Time();
    void setTime(int, int, int);
    void printUniversal();
    void printStandard();
private: 
    int hour;
    int minute;
    int second;
};

#endif