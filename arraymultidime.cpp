#include <iostream>
using namespace std;

int main() {

    string letter[2][4] {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    cout << letter[0][2];
}