#include<iostream>
using namespace std;

int main() {
    int time = 22;
    if(time < 10) {
        cout << "Good Morning";
    }
    else if (time < 20) {
        cout << "Good Day";
    }
    else {
        cout << "Good Evening";
    }


    return 0;
}