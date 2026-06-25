#include <iostream>
#include <string>

using namespace std;

const int VAULT_GOAL = 42500;

int daysToFund(int startBalance, int dailyDeposit) {
    int day = 0;
    while(startBalance < VAULT_GOAL) {
        day++;
        startBalance += dailyDeposit;
        cout << "Day " << day << ": deposited " << dailyDeposit << ", balance now " << startBalance << endl;
    }
    return day;
}

int main() {
    int days = 0;
    int startBalance, dailyDeposit;
    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;
    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout << "--- Vault Savings Plan ---" << endl;
    
    days = daysToFund(startBalance, dailyDeposit);
    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}