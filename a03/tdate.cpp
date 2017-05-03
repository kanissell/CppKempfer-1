#include <iostream>
#include "tdate.h"
#include <ctime>
#include <iomanip>
using namespace std;

time_t now;
TDate::TDate(){
    now = time(0);
    tm *ltm = localtime(&now);
    days = ltm->tm_mday;
    months = 1 + ltm->tm_mon;
    year = 1900 + ltm->tm_year;


}

TDate::TDate(int d,int m,int y)
{
    setDays(d);
    setMonths(m);
    setYears(y);

}
void TDate::setDays(int d){
    days = d;
}
int TDate::getDays(){
    return days;
}
void TDate::setMonths(int m){
    months = m;
}
int TDate::getMonths(){
    return months;
}
void TDate::setYears(int y){
    year = y;
}
int TDate:: getYears(){
    return year;
}

void TDate::print(){
    cout <<setfill('0')<<setw(2)<<getDays()<<"."
                        <<setw(2)<<getMonths()<<"."
                        <<setw(2)<<getYears();
}

