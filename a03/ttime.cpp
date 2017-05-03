#include <iostream>
#include "ttime.h"
#include <ctime>
#include <iomanip>
using namespace std;

TTime::TTime(){
    now = time(0);
    tm *ltm = localtime(&now);
    hour = ltm->tm_hour;
    minutes = ltm->tm_min;
    secs = ltm->tm_sec;

}
TTime::TTime(int h,int m,int s)
{
    setSecs(s);
    setMinutus(m);
    setHour(h);

}
TTime::TTime(int h,int m)
{
    setSecs(0);
    setMinutus(m);
    setHour(h);

}
void TTime::setSecs(int s){
    secs = s;
}
int TTime::getSecs(){
    return secs;
}
void TTime::setMinutus(int m){
    minutes = m;
}
int TTime::getMinutes(){
    return minutes;
}
void TTime::setHour(int h){
    hour = h;
}
int TTime::getHour(){
    return hour;
}
void TTime::print(){
    cout <<setfill('0')<<setw(2)<<getHour()<<"/"
                        <<setw(2)<<getMinutes()<<"/"
                        <<setw(2)<<getSecs();
}
