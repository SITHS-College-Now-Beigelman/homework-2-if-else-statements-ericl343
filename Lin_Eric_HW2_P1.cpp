//Lin Eric
//October 6th, 2024
//Homework #2 P1

#include <iostream>

using namespace std;

int main() {
    int month;
    int day;

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day (1-31): ";
    cin >> day;

    string season;

    if ((month == 3 && day >= 21) || (month == 4) || (month == 5) || (month == 6 && day <= 20)) 
    {
        season = "Spring";

    } else if ((month == 6 && day >= 21) || (month == 7) || (month == 8) || (month == 9 && day <= 22)) 
    {
        season = "Summer";

    } else if ((month == 9 && day >= 23) || (month == 10) || (month == 11) || (month == 12 && day <= 21)) 
    {
        season = "Fall";

    } else 
    {
        season = "Winter";
    }

    cout << "It is now " << season << "!" << endl;

    return 0;
}