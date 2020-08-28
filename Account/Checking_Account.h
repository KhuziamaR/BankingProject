#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account {

public:
    Checking_Account(std::string name = "Unknown Checking Acc", double balance = 0.0);    
    virtual bool withdraw(double) ;
    virtual bool deposit(double) ;
    virtual void print(std::ostream &os) const ;
    virtual ~Checking_Account()=default;
};

#endif // _CHECKING_ACCOUNT_H_
