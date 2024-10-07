//Lin Eric
//October 6th, 2024
//Homework #2 P2

#include <iostream>
#include <iomanip>
using namespace std;

//Time to start the code
int main() {
    double j1;  //Judge 1
    double j2;  //Judge 1
    double j3;  //Judge 1
    double j4;  //Judge 1
    double j5;  //Judge 1
    double j6;  //Judge 1

    //Heads up! Instructions to the user!
    cout << "Enter scores from 6 judges on scale from 0.0 to 10.0: " << endl;

    //The Folowing is to prompt the user to input values of each Judge from 1-6
    cout << "Judge #1: ";
    cin >> j1;
    cout << "Judge #2: ";
    cin >> j2;
    cout << "Judge #3: ";
    cin >> j3;
    cout << "Judge #4: ";
    cin >> j4;
    cout << "Judge #5: ";
    cin >> j5;
    cout << "Judge #6: ";
    cin >> j6;

    // Finding which judges has the highest and lowest scores by setting the first to be a base value
    double highest = j1;
    double lowest = j1;
    double total = j1 + j2 + j3 + j4 + j5 + j6;

    //In order to determine the lowest or highest we compare each with the current highest/lowest
    if (j2 > highest) highest = j2;
    if (j2 < lowest) lowest = j2;

    if (j3 > highest) highest = j3;
    if (j3 < lowest) lowest = j3;

    if (j4 > highest) highest = j4;
    if (j4 < lowest) lowest = j4;

    if (j5 > highest) highest = j5;
    if (j5 < lowest) lowest = j5;

    if (j6 > highest) highest = j6;
    if (j6 < lowest) lowest = j6;

    // Calculate final score by removing highest and lowest
    total = total - highest - lowest; 
    // Calculate average by dividing amongst the remaining 4
    double finalScore = total / 4; 
    //Final Annoucement to the user...
    cout << "The final score for the hackathon project is: " << finalScore << "!!!" << endl;

    return 0;
}
/*
Enter scores from 6 judges on scale from 0.0 to 10.0: 
Judge #1: 9.2
Judge #2: 8.8
Judge #3: 10
Judge #4: 9.6
Judge #5: 8.4
Judge #6: 9.2
The final score for the hackathon project is: 9.2!!!
*/