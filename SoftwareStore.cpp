
/* ## Assignment 2
A software company sells a package that retails for $199. Quantity discounts are given according to the following table.
|Quantity|Discount|
|---|---|
|10-19|20%|
|20-40|30%|
|50-99|40%|
|100 or more | 50%|

Write a program that asks for the number of units purchased and computes the total cost of the purchase.

Test for the following number of units: 12, 29, 55, 150, 5. */


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

double purchaseQuanity = 0;
double discount = 0.0;
double totalCost = 0.0;
double unitPrice = 199.0;

cout << fixed << setprecision(2);

cout << "\nHello, welcome to the Software Store! \n\n";
cout << "This program will compute the total cost of your purchase based on the number of units you buy. \n\n";
cout << "Please enter the number of units you wish to purchase: ";
cin >> purchaseQuanity;
cout << "\n";

if ( purchaseQuanity >= 10 && purchaseQuanity <= 19)
    {
        double discount = 0.2;
        totalCost = (purchaseQuanity * unitPrice) * discount;
        
        discount = .2 * 100;
        int percentDiscount = static_cast<int>(discount);
        
        

        cout << "Applying " << percentDiscount << "%" << " discount...\n";

        cout << "Your total cost is " << "$" << totalCost << ".\n\n";

        cout << "Thank you for shopping at the Software Store!\n";
    }

else if ( purchaseQuanity >= 20 && purchaseQuanity <= 40)
    {
        double discount = 0.3;
        
         totalCost = (purchaseQuanity * unitPrice) * discount;

        cout << "Applying discount!\n\n";

        cout << "Your total cost is " << "$" << totalCost << ".\n\n";

        cout << "Thank you for shopping at the Software Store!\n";

    }

else if ( purchaseQuanity >= 50 && purchaseQuanity <= 99)
    {
        double discount = 0.4;

        totalCost = (purchaseQuanity * unitPrice) * discount;

        cout << "Applying discount!\n\n";

        cout << "Your total cost is " << "$" << totalCost << ".\n\n";

        cout << "Thank you for shopping at the Software Store!\n";
    }

else if ( purchaseQuanity >= 100 )
    {
        double discount = 0.5;

        totalCost = (purchaseQuanity * unitPrice) * discount;

        cout << "Applying discount!\n\n";

        cout << "Your total cost is " << "$" << totalCost << ".\n\n";

        cout << "Thank you for shopping at the Software Store!\n";
    }

    else
    {
        cout << "No discount applied; you must buy more packages!\n\nn"
             << "Processing transaction...\n\n";

        totalCost = purchaseQuanity * unitPrice;

        cout << "Your total is " << "$" << totalCost << ".\n\n";

        cout << "Thank you for shopping at the Software Store";

    }

    return 0;

    }



