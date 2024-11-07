#include <iostream>
using namespace std;

int main() {
    int items = 50;
    double cost_per_item = 50.99;
    double total_cost = items * cost_per_item;

    cout << "Total items : " << items << "\n";
    cout << "Cost per items : " << cost_per_item << "$" << "\n";
    cout << "Total cost : " << total_cost;

    return 0;
}