#include <iostream>
using namespace std;

int main() {
    string letter[2][2][2] {
        {
            {"A", "B"}, 
            {"C", "D"}

        }, 
        {
            {"E", "F"}, 
            {"G", "H"}
        }


    };

    cout << letter[0][1][0];


    return 0;
}