#include <iostream>

using namespace std;

int main () {
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickiel_value{5};
    
    int cent_amount{};
    cout << "Enter an amount in cents:";
    cin >> cent_amount;
    
    int balance{},dollars{},quarters{},dimes{},nickels{},pennies{};
    
    dollars = cent_amount / dollar_value;
    balance = cent_amount - (dollars *dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickels = balance / nickiel_value;
    balance -= nickels * nickiel_value;
    
    pennies = balance;
    
    cout << "Dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    cout << "Thanks for using our changer ;)";
    
    
    return 0;
    }