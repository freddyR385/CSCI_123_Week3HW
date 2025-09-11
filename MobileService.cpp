/*## Assignment 3

A mobile phone service has three different data plans for its customers:

|Plan|Feature|
|--|--|
|Plan A|For $39.99 per month, 2 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|
|Plan B|For $59.99 per month, 8 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|
|Plan C|For $79.99 per month, unlimited data is provided.|

Write a program that calculates a customer’s monthly bill. It should input the customer name, which plan was purchased, 
and how many gigabytes were used. It should then create a bill that includes the input information and the total amount 
due. It should also display how much money plan A customers would save if 
they purchased plan B or C, and how much money plan B customers would save if they purchased plan C. 
If there would be no savings, no message should be printed. Wherever possible, use named constants 

instead of numbers. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string customerName;
    double monthlyBill;
    char storagePlan;
    double gbUsage;

    cout << "Please enter your name:";
    cin >> customerName;

    cout << "How many gigabytes do you plan on using this month?\n\n"
         << "Our plans include:\n\n"
         << "|Plan A|For $39.99 per month, 2 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|\n"
         << "|Plan B|For $59.99 per month, 8 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|\n"
         << "|Plan C|For $79.99 per month, unlimited data is provided.|\n\n";

    cout << "You choose: ";
    cin >> storagePlan;

        
}
