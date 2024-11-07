#include <iostream>
#include <string>

using namespace std;

int main() {

    string name = "Raju ";
    string surname = "giraff";
    string full_name = name +" " + surname;
    cout << full_name << "\n";


    string family_name = name.append(surname);
    cout << family_name << "\n";

    string p = "10";
    string q = "20";
    string r = p + q;
    cout << r << "\n";



    string desc = "Today s whether is \" Healthy \" for everyone";
    cout << desc;
    return 0;
}