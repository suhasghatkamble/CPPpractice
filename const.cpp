#include <iostream>
using namespace std;

int main() {
    int cloud = 1;
    cloud = 2;
    cout << cloud << endl;

    const int rainbow = 11;
    // rainbow = 1; 
    // cant change const value
    cout << rainbow << endl;

    //const int minutesPerHours;
    //minutesPerHours = 60;
    //cout << minutesPerHours;
    // when declaring constant initialize there only

    return 0;
}

//command to run 
// cd "/home/suhas/Documents/MyC++/" && g++ const.cpp -o const && "/home/suhas/Documents/MyC++/"const