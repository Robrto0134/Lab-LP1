#include <iostream>
#include "Date.h"

using namespace std;

int main(void){
    string day, month, year;
    cout << "Digite a data: " << endl;
    cin >> day >> month >> year;
    
    Date d = Date(day, month, year);

    cout << d.get_day() << "/" << d.get_month() << "/" << d.get_year() << endl << endl;

    d.nextDay();

    cout << d.get_day() << "/" << d.get_month() << "/" << d.get_year() << endl << endl;

    return 0;
}