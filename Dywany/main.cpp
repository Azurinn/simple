#include <iostream>

using namespace std;

int main () {
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    const double p_tax {0.06};
    const int estimate {30};

    cout <<"Welcome to Frank carpet cleaning service\n";
    cout << "Enter the number of small rooms:";
    int amount_small_rooms {0};
    cin >> amount_small_rooms;
    cout << "Enter the number of large rooms:";
    int amount_large_rooms {0};
    cin >> amount_large_rooms;
    cout << "Price per small room:$" << price_small_room << endl;
    cout << "Price per large room:$" << price_large_room << endl;
    double cost {0};
    cost = (price_small_room * amount_small_rooms) + (price_large_room * amount_large_rooms);
    cout << "Cost:$ " << cost << endl;
    double tax {0};
    tax = cost * p_tax;
    cout << "=============================\n";
    double total = cost + tax;
    cout << "Total estimate:$" << total <<endl;
    cout << "This estimate is valid for " << estimate << " days";
    return 0;
    }