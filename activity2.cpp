#include <iostream>
#include <string>
using namespace std;

int main() {

string fullname, courseYrSec, BDay, motto;

//input
cout << “Enter your Full Name: “;
getline (cin, fullname);

cout << “Enter your Course, Year and Section: “;
getline (cin, courseYrSec);

cout << “Enter your Birthday: “;
getline (cin, BDay);

cout << “Enter your Motto/Motivation in life;
getline (cin, motto);

//output

cout << “Hi! I’m “ << fullname << “of “ << courseYrSec << “. Welcome to Data Structure and Algorithm!” << endl;
cout << “My birthday is on “ << BDay << “. And my Motto/Motivation in life is “ << motto << “.” endl;

return 0;
}