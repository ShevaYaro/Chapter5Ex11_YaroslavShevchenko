/*
Tite Chapter 5 Exercise 11 - Population
File name:Chapter5Ex11_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 10/22/2024
Requirements:

Write a program that will predict the size of a population of organisms.

The program should ask the user for the starting number of organisms,

their average daily population increase (as a percentage),

and the number of days they will multiply. A loop should display the size of the population for each day.

Input Validation: Do not accept a number less than 2 for the starting size of the population.

Do not accept a negative number for average daily population increase.

Do not accept a number less than 1 for the number of days they will multiply.

*/
#include <iostream>
using namespace std;



double calc(double startNum, double percent);
void display();

int main()
{
    display();
}

double calc(double startNum, double percent) {
    double change;
    change = startNum * ((percent/100)+1);
    return change;

}

void display() {
    double sN = -1;
    double p = -1;
    int days = -1;
    double ans;
    while (sN < 2) {
        cout << "How many organisms you start with?(2 or more): ";
        cin >> sN;
    }
    
    while (p < 0) {
        cout << "What is the average daily population increase? (in percent ex 101): ";
        cin >> p;
    }
    
    while (days < 1) {
        cout << "Enter the number of days they will multiply (one or more): ";
        cin >> days;
    }
    



    for (int i = 0; i < days; i++) {
        ans = calc(sN, p);
        cout << "day " << i + 1 << "\t" << ans << " organisms" << endl;
        sN = calc(sN, p);
    }
}