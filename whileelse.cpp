#include <iostream>
using namespace std;

int main() {
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            cout << "No Yatzi \n";
        }
        else {
            cout << "Yatzi";
        }

        dice = dice + 1;
    }
    return 0;
}