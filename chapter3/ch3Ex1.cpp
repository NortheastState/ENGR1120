/*
 * ========================================================
 * Name:    David Blair
 * Course:  ENGR 1120
 * Date:    1/15/2018
 *
 * ========================================================
 * Project: Foobar
 * Description: This project explores create simple functions
 *              along with if else-if conditional constructs.
 *
 * ========================================================
 */

#include <iostream> //cin, cout
#include <iomanip>  //setprecision

using namespace std; //allows access into the std namespace

//define functions
//printHeader return a string that contains information that
//is output to the user at the top of the application
string printHeader()
{
    string msg = "\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    msg += "\n\t Name: Foo Bar";
    msg += "\n\t Due Date: 5/5/18";
    msg += "\n\t Project Name: Class Example";
    msg += "\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    return msg;

}

//calculateTip calculates a 20% tip for some amount
//entered by the user
float calculateTip(float amount)
{
    float tipAmount = 0.0;
    float percentTip = .20;
    tipAmount = percentTip * amount;
    return tipAmount;
}

//define main
int main()
{
    //local variables
    float totalBill = 0.0;
    float tipAmount = 0.0;
    float totalBillWithTip = 0.0;

    cout << printHeader();
    cout << endl << endl;
    cout << "\tEnter the amount for your bill: ";
    cin >> totalBill;
    tipAmount = calculateTip(totalBill);
    totalBillWithTip = totalBill + tipAmount;
    cout << "\tYour bill with a 20% tip is: " << fixed << setprecision(2) << totalBillWithTip;

}