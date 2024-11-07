#include <iostream>
using namespace std;

int main() {

    int a = 5;
    a+=3;
    cout << a << "\n";










    //Bitwise AND

    int x = 5;
    x &= 3;
    cout << x << "\n";

/*Explanation:

    5 in binary is 0101
    3 in binary is 0011
    Performing bitwise AND:
        0 & 0 = 0
        1 & 0 = 0
        0 & 1 = 0
        1 & 1 = 1

The resulting binary is 0001, which is 1 in decimal.
*/




    //Right shift 

    int z = 5; // binary: 0101
    z >>= 2;   // Shift bits to the right by 2 positions
    cout << z << "\n";
/*
    Perform right shift:
    0101 (5 in binary)
    ------
    0001 (which is 1 in decimal)

    cout << x; // Output: 1
    return 0;
}

Breakdown:

    Initial value of x: 5 (binary representation: 0101)
    Right shift by 2:
        0101 becomes 0001 after shifting the bits two positions to the right.
    Final value of x: 1 (in decimal).

Output

When you run this code, the output will be:

1
*/





    //Bitwise OR

    int l = 5;
    l |= 3;
    cout << l;


    
    /*
    Perform bitwise OR:
    0101
    0011
    ------
    0111 (which is 7 in decimal)

Explanation:

    Initial value of x: 5 (binary: 0101)
    Value to OR with: 3 (binary: 0011)
    Result of x |= 3:
        0 OR 0 = 0
        1 OR 0 = 1
        0 OR 1 = 1
        1 OR 1 = 1

    The result is 0111, which is 7 in decimal.

    */

    return 0;
}