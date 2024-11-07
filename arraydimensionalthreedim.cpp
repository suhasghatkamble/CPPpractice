#include <iostream>
using namespace std;

int main() {
    string letter[2][4][3] = {
        {
            {"A", "B","C"},
            {"H", "I", "J"},
            {"O", "P", "Q"},
            {"D", "E", "F"}

        }, 
        {
            {"G", "K", "L"}, 
            {"M", "N", "R"}, 
            {"S", "T", "U"},
            {"V", "W", "Z"}

        }

    };

    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            for (int m=0; m<3; m++) {
                cout << letter[i][j][m];
            }
            cout << "\n";
        }
    }


    return 0;
}