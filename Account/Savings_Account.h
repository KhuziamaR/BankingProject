#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account: public Account {

protected:
    double int_rate;
public:
    Savings_Account(std::string name = "Unnamed Saving Account", double balance =0.0, double int_rate = 0.0);    
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Savings_Account() = default;
};

#endif 
