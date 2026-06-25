#include <iostream>
#include <string>

using namespace std;

// Why can't we just write a sumArray function once and reuse it lol
int totalGold(int donations[], int size) {
    int total;
    for(int i = 0; i < size; i++) {
        total += donations[i];
    }
    return total;
}

int main() {
    const int VAULT_GOAL = 42500;
    const int MAX_SIZE = 100;
    int donations; 
    int donationAmounts[MAX_SIZE];
    int total = 0;

    cout << "Enter the number of gold donations: ";
    cin >> donations;

    for(int i = 0; i < donations; i++) {
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> donationAmounts[i];
    }

    total = totalGold(donationAmounts, donations);

    cout << "---Vault Funding---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << VAULT_GOAL << endl;

    if(total >= VAULT_GOAL) {
        cout << "The Vault is fully funded! Surplus: " << total - VAULT_GOAL << " gold" << endl;
    }
    else {
        cout << "The Vault still needs " << VAULT_GOAL - total << " more gold." << endl;
    }
    
    return 0;
}