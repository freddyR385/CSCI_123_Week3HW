/*## Assignment 3

A mobile phone service has three different data plans for its customers:

|Plan|Feature|
|--|--|
|Plan A|For $39.99 per month, 2 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|
|Plan B|For $59.99 per month, 8 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|
|Plan C|For $79.99 per month, unlimited data is provided.|

Write a program that calculates a customer’s monthly bill. It should input the customer name, which plan was purchased, 
and how many gigabytes were used. It should then create a bill that includes the input information and the total amount 
due. 

It should also display how much money plan A customers would save if 
they purchased plan B or C, and how much money plan B customers would save if they purchased plan C. 

If there would be no savings, no message should be printed. Wherever possible, use named constants instead of numbers. */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const double gbCostPlanA = 39.99;
    const double gbCostPlanB = 59.99;
    const double gbCostPlanC = 79.99;
    const double gbSurcharge = 8;

    string customerName;
    string storagePlan;
    double gbUsage = 0;
    double monthlyBill = 0;
    double extraGB;

    cout << "Please enter your name (First Only): ";
    cin >> customerName;
    cout << "\n\n"
         << "Our plans include:\n\n"
         << "|Plan A|For $39.99 per month, 2 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|\n"
         << "|Plan B|For $59.99 per month, 8 gigabytes are provided. Additional usage costs $8.00 per gigabyte.|\n"
         << "|Plan C|For $79.99 per month, unlimited data is provided.|\n\n";

    cout << "How many gigabytes do you plan on using this month? : ";
    cin >> gbUsage;

    cout << "Which plan are you choosing?: ";
    cin >> storagePlan;
    cout << "\n\nYou chose " << storagePlan << "\n\n";
    cout << "Printing Mobile Service bill... \n\n";

    // PLAN A 
    if (storagePlan == "a" || storagePlan == "A" || storagePlan == "Plan A" || storagePlan == "Plan a")
    {   
        monthlyBill = gbCostPlanA;
        
    
         if ( gbUsage > 2)
            {   
            extraGB = gbUsage - 2;
            monthlyBill = gbCostPlanA + (gbSurcharge * extraGB);   
            }

    }

    else if (storagePlan == "b" || storagePlan == "B" || storagePlan == "Plan B" || storagePlan == "Plan b" )
    {
         monthlyBill = gbCostPlanB;
        

         if ( gbUsage > 8)
            {   
            extraGB = gbUsage - 8;
            monthlyBill = gbCostPlanB + (gbSurcharge * extraGB);   
            }
    }   

    else if (storagePlan == "c" || storagePlan == "C" || storagePlan == "Plan C" || storagePlan == "Plan c" )        
    {
        monthlyBill = gbCostPlanC;
    }
    
    
    else
        {
            cout << "No plan/storage selected..."
                 << "\n\nExiting Program...";
            
            return 0;
        }

     cout << fixed << setprecision(2);
     cout << "Mobile Service Bill\n"
          << "---------------------------------"
          << "\n\nName: " << customerName 
          << "\nPlan: " << storagePlan  
          << "\nGigabytes Used: " << gbUsage
          << "\n\nTOTAL DUE: " << "$" << monthlyBill
          << "\n\n---------------------------------";
    
    
    if ( storagePlan == "a" || storagePlan == "A" || storagePlan == "Plan A" || storagePlan == "Plan a")
    {
       double billB = 0;
       double billC = 0;
       double savingsB = 0;
       double savingsC = 0;

       billB = gbCostPlanB;
       billC = gbCostPlanC;

        if ( gbUsage > 8)
            {   
            extraGB = gbUsage - 8;
            billB += gbSurcharge * extraGB;   
            }
        
      savingsB = monthlyBill - billB;
      savingsC = monthlyBill - billC;

    
       cout << "\n\nYou could have saved: $"<< savingsB << " with Plan B";
       cout << "\nYou could have saved: $"<< savingsC << " with Plan C";
    }

    if ( storagePlan == "b" || storagePlan == "B" || storagePlan == "Plan B" || storagePlan == "Plan b")
    {
         double billC = 0;
         double savingsC = 0;

         billC = gbCostPlanC;
         savingsC = monthlyBill - billC;

         cout << "\n\nYou could have saved: $"<< savingsC << " with Plan C";
    }

    
    
}
