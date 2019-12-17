#ifndef PDS2_SAVINGS_H
#define PDS2_SAVINGS_H
#include <iostream>

class SavingsAccount {

    private:
      	int savings_balance;

    public:
		SavingsAccount(int saldo);
		static float annual_savings_rate;
		int calculate_monthly_balance();
		int modify_interest_rate(float annual_savings_rate);
      
};

#endif
