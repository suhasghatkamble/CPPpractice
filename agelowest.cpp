#include <iostream>
using namespace std;

int main() {
    int age[8] = {20, 10, 30, 50, 90, 40, 80, 90};
    int i, sizeage;
    sizeage = sizeof(age) / sizeof(age[0]);
    int lowestage=age[0];

    for (i=0; i<sizeage; i++)
    {
        if(lowestage>age[i]){
            lowestage=age[i];
        }
    }

    cout << "Lowest age : " << lowestage;


    return 0;
}