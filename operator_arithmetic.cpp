#include <iostream>
using namespace std;

// addition +    a+b
// substration -   a-b
// multiplication *  a*b
// division /   a/b
// modulus  %   a%b
// increment  ++  ++a
// decrement --  --b

int main() {
    //Addition
    int a = 20;
    int b = 33;
    int c = a+b;
    cout << c << "\n";



    // Substration
    int x = 53;
    int y = 42;
    int z = x - y;
    cout << z << "\n";

    // Multiplication
    int m = 54;
    int n = 34;
    int o = m * n;
    cout << o << "\n";

    // Division
    int p = 24;
    int q = 4;
    int r = p / q;
    cout << r << "\n";

    // Modulus
    int e = 5;
    int f = 2;
    int g = e % f;
    cout << g << "\n";

    // Increment
    int h = 5;
    ++h;
    cout << h << "\n";

    int i = 2;
    --i;
    cout << i << "\n";


    return 0;
}