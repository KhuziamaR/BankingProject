#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
private:
    double bonus_amount = 50.0;
    double bonus_threshold = 5000.0;
    int max_withdrawals = 3;
    double max_withdraw_percent = 0.2;
protected:
    int num_withdrawals;
public:
    Trust_Account(std::string name = "Unnamed Trust Account",  double balance = 0.0, double int_rate = 0.0);
    
    // Deposits of $5000.00 or more will receive $50 bonus
    virtual bool deposit(double amount) override;
    
    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account()=default;

};

#endif // _TRUST_ACCOUNT_H_
