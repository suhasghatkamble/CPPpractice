#include <iostream>
#include <string>
using namespace std;

int main() {

    string full_name;
    cout << "Enter your full name : ";
    cin >> full_name;
    cout << full_name << "\n";


    string address;
    cout << "Enter your full address";
    cin >> address;
    cout << "Your address is : " << address << "\n";


    string flwr_name;
    cout << "Enter flower name you like : ";
    getline(cin, flwr_name);
    cout << flwr_name;
    return 0;
}