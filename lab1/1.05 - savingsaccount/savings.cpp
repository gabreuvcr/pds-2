#include "savings.h"

float SavingsAccount::annual_savings_rate = 1.10;

SavingsAccount::SavingsAccount(int saldo) {
    savings_balance = saldo;
}

int SavingsAccount::calculate_monthly_balance() {
    savings_balance = ((savings_balance * annual_savings_rate) / 12) + savings_balance;
    return savings_balance;
}

int SavingsAccount::modify_interest_rate(float annual_savings_rate) {
    return annual_savings_rate;
}
