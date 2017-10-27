/**
 *  @author Sheng Lo
 *  @date September 7, 2016
 *  @file main.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "cs150check.h"             

// Add your Blackboard login name
string STUDENT = "ilo";

// Change to true for simple IO tests
bool TESTING = true;               

//// Include your own header files here

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */
int run()
{
    /*
        Implementation comments.
        Describe the inputs, outputs, given values
        and calculations here.
    */
    
    // Your code goes here
    
    // Input session
    cout << "Your weight in pounds: ";
    int weight;
    cin >> weight;
    cout << "Number of METS for the activity: ";
    int mets;
    cin >> mets;
    cout << "Minutes spent exercising: ";
    int minutes;
    cin >> minutes;
    
    // Processing
    const double FACTOR = .0175;
    const double POUNDS_PER_KG = 2.2;
    double calories = FACTOR * mets * (weight / POUNDS_PER_KG) * minutes;
    //Calories/ Minute = factor × METS × (Weight in kilograms)
    
    // Output session
    cout << fixed << showpoint << setprecision(2);
    cout << "You burned an estimated [" << calories << "] calories." << endl;
    
    return 0;
}


