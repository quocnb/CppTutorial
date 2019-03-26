//
//  chap_01_example.cpp
//  CPlusPlusTutorial
//
//  Created by Quoc Nguyen on 2019/03/25.
//  Copyright © 2019 Quoc Nguyen. All rights reserved.
//

#include <iostream>
#include "chap_01_example.hpp"

using namespace std;

void calculateRectangle();
void salesTax();
void playNumberGuessing();
void monthlyPaycheck();

void chap01Example() {
    cout << "----- EXAMPLE 1.1: RECTANGLE -----\n\n";
    calculateRectangle();
    cout << "--- End example ---\n\n";

    cout << "----- EXAMPLE 1.2: TAX CALCULATE -----\n\n";
    salesTax();
    cout << "--- End example ---\n\n";

    cout << "----- EXAMPLE 1.3: PAYCHECK -----\n\n";
    monthlyPaycheck();
    cout << "\n\n--- End example ---\n\n";

    cout << "----- EXAMPLE 1.4: NUMBER GUESSING -----\n\n";
    playNumberGuessing();
    cout << "\n\n--- End example ---\n\n";
}

void calculateRectangle() {
    using namespace std;
    float length, width;
    cout << "Welcome to the calculate rectangle perimeter and area program\n";
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    float p = 2 * (length + width);
    float a = length * width;
    cout << "Perimater = " << p << "\n";
    cout << "Area = " << a << "\n";
}

void salesTax() {
    float price = 0;
    cout << "Tax calculate program!\n";
    cout << "Enter the price for calculate tax : ";
    cin >> price;
    float stateTax, cityTax, luxuryTax = 0;
    stateTax = price * 0.04;
    cityTax = price * 0.015;
    if (price > 50000) {
        luxuryTax = price * 0.1;
    }
    price += cityTax + stateTax + luxuryTax;
    cout << "Total amount : " << price << "\n";
}

void monthlyPaycheck() {
    float paycheck = 0;
    float baseSalary, workingYears, totalSales;
    cout << "Paycheck program!\n";
    cout << "Enter the base salary : ";
    cin >> baseSalary;
    cout << "Enter the working years : ";
    cin >> workingYears;
    cout << "Enter the sales : ";
    cin >> totalSales;
    paycheck += baseSalary;
    if (workingYears > 5) {
        paycheck += workingYears * 20;
    } else {
        paycheck += workingYears * 10;
    }
    if (totalSales >= 10000) {
        paycheck += totalSales * 0.06;
    } else if (totalSales >= 5000) {
         paycheck += totalSales * 0.03;
    }
    cout << "Monthly Paycheck : " << paycheck << "\n";
}

void playNumberGuessing() {
    using namespace std;
    int correctNumber = arc4random() % 100;
    cout << "Welcome to number guessing game!!!\n";
    do {
        int number;
        cout << "\nEnter your number (from 0 to 99) : ";
        cin >> number;
        if (number == correctNumber) {
            cout << "You guessed the correct number.";
            break;
        } else if (number < correctNumber) {
            cout << "Your guess is lower than the number. Guess again!";
        } else {
            cout << "Your guess is higher than the number. Guess again!";
        }
    } while (true);
}
