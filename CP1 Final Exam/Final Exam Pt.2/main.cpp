//
//  main.cpp
//  Final Exam Pt.2
//
//  Created by Austin Ramsey on 4/30/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

class HomeMortgage {
private:
    int loanAmount;
    int loanLifeYears;
    double annualInterestRate;
    double monthlyPayment;
    double totalAmountPaid;
public:
    HomeMortgage()
    {monthlyPayment = 0; loanAmount = 0; annualInterestRate = 0; loanLifeYears = 0; totalAmountPaid = 0;}
    void setLoanAmount(int);
    void setInterestRate(double);
    void setLoanLifeYears(int);
    void loanCalculations(double, int, int);
    int getLoanAmount() const
    { return loanAmount;}
    int getLoanLifeYears() const
    { return loanLifeYears; }
    double getAnnualInterestRate() const
    { return annualInterestRate; }
    double getMonthlyPayment() const
    { return monthlyPayment; }
    double getTotalAmountPaid() const
    { return totalAmountPaid; }
};

void HomeMortgage::setLoanAmount(int integer) {
    loanAmount = integer;
}

void HomeMortgage::setInterestRate(double dbl) {
    annualInterestRate = dbl;
}

void HomeMortgage::setLoanLifeYears(int integer) {
    loanLifeYears = integer;
}

void HomeMortgage::loanCalculations(double dbl, int year, int amount) {
    double pInterestRate = ((annualInterestRate/100)/12);
    int nPayments = (loanLifeYears*12);
    double dFactor = (pow(1+pInterestRate,nPayments)-1)/(pInterestRate*pow(1+pInterestRate,nPayments));
    monthlyPayment = loanAmount / dFactor;
    totalAmountPaid = monthlyPayment * nPayments;
}

int main() {
    //Variables
    int lAmount;
    int yAmount;
    double iDbl;
    char option;
    
    HomeMortgage newMortgage;
    
    cout << "Welcome, what is the loan amount you desire?" << endl;
    cin >> lAmount;
    lAmount = abs(lAmount);
    newMortgage.setLoanAmount(lAmount);
    cout << "\n";
    cout << "How long in years is the loan for?" << endl;
    cin >> yAmount;
    yAmount = abs(yAmount);
    newMortgage.setLoanLifeYears(yAmount);
    cout << "\n";
    cout << "What is the interest rate of your loan? (Percent)" << endl;
    cin >> iDbl;
    iDbl = abs(iDbl);
    newMortgage.setInterestRate(iDbl);
    newMortgage.loanCalculations(iDbl, yAmount, lAmount);
    cout << "\n";
    cout << "Updated Mortgage Information:" << endl;
    cout << "\n";
    cout << "Loan Amount: " << newMortgage.getLoanAmount() << endl;
    cout << "Life of Loan: " << newMortgage.getLoanLifeYears() << " Years" << endl;
    cout << "Interest Rate: " << newMortgage.getAnnualInterestRate() << "%" << endl;
    cout << "Monthly Payment: " << newMortgage.getMonthlyPayment() << " Dollars" << endl;
    cout << "Total Payment: " << newMortgage.getTotalAmountPaid() << " Dollars" << endl;
    cout << "\n";
    cout << "\n";
    cout << "Thank you for using the program. Start over? (y or n)" << endl;
    cin >> option;
    if (option == 'y') {
        return main();
    } else {
        cout << "\n";
        
        return 0;
    }
}
