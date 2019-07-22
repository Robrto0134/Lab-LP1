#include <iostream>
#include "Date.h"

using namespace std;

    Date::Date(){
        day = "01";
        month = "01";
        year = "0001";
    }
    Date::Date(string day, string month, string year)
        :Date()
    {
        bool b, ok;
        if(stoi(year) > 0 && stoi(year)%4 == 0 && stoi(year)%100 != 0)
            b = 1;
        else
            b = 0;

        if((stoi(day) > 0) && (stoi(day) < 29) && stoi(month) == 2 && stoi(year) > 0)
            ok = 1;
        else if((stoi(day) > 0) && (stoi(day) < 30) && stoi(month) == 2 && b)
            ok = 1;
        else if((stoi(day) > 0) && (stoi(day) < 31) && stoi(month) == (3, 6, 9, 11) && stoi(year) > 0)
            ok = 1;
        else if((stoi(day) > 0) && (stoi(day) < 32) && stoi(month) == (1, 3, 5,7, 8, 10, 12) && stoi(year) > 0)
            ok = 1;
        else{
            cout << "Data Incorreta." << endl;
            ok = 0;
        }
        if(ok){
            this->day = day;
            this->month = month;
            this->year = year;
        }
    }

    void Date::set_day(string day){
        this->day = day;
    }
    void Date::set_month(string month){
        this->month = month;
    }
    void Date::set_year(string year){
        this->year = year;
    }

    string Date::get_day(){

        return day;
    }
    string Date::get_month(){
        return month;
    }
    string Date::get_year(){
        return year;
    }

    void Date::nextDay(){
        bool b;
        int m, y;

        m = stoi(month);
        y= stoi(year);

        if(stoi(year) > 0 && stoi(year)%4 == 0 && stoi(year)%100 != 0)
            b = 1;
        else
            b = 0;

        day = to_string(stoi(day)+1);

        if(stoi(day) > 28 && m == 2 && !b){
            day = "1";
            m++;
        }else if(stoi(day) > 29 && m == 2 && b){
            day = "1";
            m++;
        }else if(stoi(day) > 30 && m == (3, 6, 9, 11)){
            day = "1";
            m++;
        }else if(stoi(day) > 31){
            day = "1";
            m++;
        }
        if(m > 12){
            m = 1;
            y++;
        }
        month = to_string(m);
        year = to_string(y);
        if(stoi(day) < 10)
            day = "0" + day;
        if(stoi(month) < 10)
            month = "0" + month;
        if(stoi(year) < 10)
            year = "0" + year;
    }
