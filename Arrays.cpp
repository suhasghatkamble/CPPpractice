#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"a", "b", "c", "d"};
    cout << cars[0];
    cout << "\n";

    cars[2] = "e";
    cout << cars[2];

    return 0;
}