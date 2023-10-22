// Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator() to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount. The tax is calculated as follows:

//  (a) The savings is deducted from the gross income to calculate the taxable income. The maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.

//  (b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2); if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.


#include<iostream>
using namespace std;

double taxCalculator(float grossSalary, float totalSavings){
    float taxableAmount = 0;
    if(totalSavings < 100000)
    taxableAmount = grossSalary - totalSavings;
    else   
    taxableAmount = grossSalary - 100000; 
    if(taxableAmount < 100000)
        return 0.0;
    else if(taxableAmount < 200000)
        return (taxableAmount - 100000) * 0.10;
    else if(taxableAmount < 500000)
        // returning 10000 because tax for slab 1(refer question) is 10% of 200000 -100000
        return 10000 + (taxableAmount - 200000) * 0.20;
    else
        return 10000 + 60000 + (taxableAmount - 500000) * 0.30;
    
}

int main(){
    float grossSalary,totalSavings;
    cin>>grossSalary>>totalSavings;
    cout<<taxCalculator(grossSalary,totalSavings);
}