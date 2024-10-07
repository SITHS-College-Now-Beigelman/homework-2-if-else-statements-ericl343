//Lin Eric
//October 6th, 2024
//Homework #2 P1

#include <iostream>
using namespace std;

int main() {
    int month;
    int day;

    cout << "Which month is it? (1-12): ";
    cin >> month;
    cout << "Which day is it?  (1-31): ";
    cin >> day;

    //If else statements are necessary for code to process catergories of each season for the output
    string season;
    if ((month == 3 && day >= 21) || (month == 4) || (month == 5) || (month == 6 && day <= 20)) 
    {
        season = "Spring";  //The days between 3/21 to 6/20

    } else if ((month == 6 && day >= 21) || (month == 7) || (month == 8) || (month == 9 && day <= 22)) 
    {
        season = "Summer";  //The days between 6/21 to 9/22

    } else if ((month == 9 && day >= 23) || (month == 10) || (month == 11) || (month == 12 && day <= 21)) 
    {
        season = "Fall";    //The days between 9/23 to 12/21

    } else                  //No need to waste time here because only Winter is left
    {
        season = "Winter";  //The catergorized dates belonged to Winter (12/22 to 3/20)
    }

    cout << "It is now " << season << "!" << endl;

    return 0;
}
/*
Which month is it? (1-12): 12
Which day is it?  (1-31): 8
It is now Fall!
*/