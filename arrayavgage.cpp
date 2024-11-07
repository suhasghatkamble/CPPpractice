#include <iostream>
using namespace std;

int main() {
    int cars[8] = {10,20,90,80,70,40,50,70};
    int sum = 0, avg;

    int sizecars = sizeof(cars)/sizeof(cars[0]);

    for(int i=0; i<=sizecars; i++){
        sum = sum+cars[i];
    }

    avg = sum / sizecars;

    cout << avg << "\n";



    return 0;
}