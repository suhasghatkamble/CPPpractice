#include <iostream>
using namespace std;

int main() {
    string cars[6]={"a", "b", "c", "d", "m", "ei"};
    int getarraylength = sizeof(cars) / sizeof(cars[0]);
    cout << getarraylength;


    return 0;
}