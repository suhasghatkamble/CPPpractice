/*C++ string Functions

The <string> library has many functions that allow you to perform tasks on strings.

A list of popular string functions can be found in the table below.
Function 	Description
at() 	Returns an indexed character from a string
length() 	Returns the length of a string
size() 	Alias of length(). Returns the length of a string
max_size() 	Returns the maximum length of a string
empty() 	Checks wheter a string is empty or not
append() 	Appends a string (or a part of a string) to another string
substr() 	Returns a part of a string from a start index (position) and length
find() 	Returns the index (position) of the first occurrence of a string or character
rfind() 	Returns the index (position) of the last occurrence of a string or character
replace() 	Replaces a part of a string with another string
insert() 	Inserts a string at a specified index (position)
erase() 	Removes characters from a string
compare() 	Compares two strings
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string txt = "Hello guyz!";
    cout << txt.at(0) << "\n";

    cout << txt.length() << "\n";

    cout << txt.size() << "\n";

    string str = "This is the comment of line ha";
    string s = str.substr(12, 7); //comment will print
    cout << s;

    return 0;
}