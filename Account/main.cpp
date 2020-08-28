#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {

    Checking_Account Khuzi ("Khuzi", 5000);
    cout << Khuzi << endl;
    
    Account *trust = new Trust_Account("Khuzi's Trust");
    cout << *trust << endl;
    
    Account *p1 = new Checking_Account("Khuzi's Checking", 10000);
    Account *p2 = new Savings_Account("Khuzi's Saving", 1000);
    Account *p3 = new Trust_Account("Sadira's Trust");
    
    std::vector<Account *> accounts{p1,p2,p3};

    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}


