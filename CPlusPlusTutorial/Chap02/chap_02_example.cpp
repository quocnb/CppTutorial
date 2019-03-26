//
//  chap_02_example.cpp
//  CPlusPlusTutorial
//
//  Created by Quoc Nguyen on 2019/03/25.
//  Copyright © 2019 Quoc Nguyen. All rights reserved.
//

#include <iostream>
#include "chap_02_example.hpp"

using namespace std;
const double CENTI_PER_INCH = 2.54;
const int INCH_PER_FEED = 12;

void convertLength() {
    double feed, inch;
    cout << "Enter length with feed and inch (separation by the space)" << endl;
    cin >> feed >> inch;
    cout << "The length in centimeter: "
        << (feed * INCH_PER_FEED + inch) * CENTI_PER_INCH;
}

const int CENTS_TO_HALF_DOLLAR = 50;
const int CENTS_TO_QUARTER = 25;
const int CENTS_TO_DIME = 10;
const int CENTS_TO_NICKIE = 5;

void convertChange() {
    cout << "Enter change in cents: ";
    int cents;
    cin >> cents;
    cout << "The change you entered is " << cents << "\n";
    int halfDollars, quarters, dimes, nickies;
    if (cents >= CENTS_TO_HALF_DOLLAR) {
        halfDollars = cents / CENTS_TO_HALF_DOLLAR;
        cents %= CENTS_TO_HALF_DOLLAR;
        cout << "The number of half-dollars to be returned is " << halfDollars << "\n";
    }
    if (cents >= CENTS_TO_QUARTER) {
        quarters = cents / CENTS_TO_QUARTER;
        cents %= CENTS_TO_QUARTER;
        cout << "The number of quarters to be returned is " << quarters << "\n";
    }
    if (cents >= CENTS_TO_DIME) {
        dimes = cents / CENTS_TO_DIME;
        cents %= CENTS_TO_DIME;
        cout << "The number of dimes to be returned is " << dimes << "\n";
    }
    if (cents >= CENTS_TO_NICKIE) {
        nickies = cents / CENTS_TO_NICKIE;
        cents %= CENTS_TO_NICKIE;
        cout << "The number of nickies to be returned is " << nickies << "\n";
    }
    cout << "The number of pennies to be returned is " << cents << "\n";
}

void chap02Example() {
    cout << "----- EXAMPLE 2.1: CONVERT LENGTH -----\n\n";
    convertLength();
    cout << "\n\n--- End example ---\n\n";

    cout << "----- EXAMPLE 2.2: MAKE CHANGE -----\n\n";
    convertChange();
    cout << "\n\n--- End example ---\n\n";
}
