#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greeting = "hello world";
    cout << greeting << "\n";

    // concatenation
    string firstname = "Alex ";
    string lastname = "Pedro";

    // concat using + operator
    string fullname = firstname + lastname;
    // concat using append
    string fullNameWithAppend = firstname.append(lastname);

    int lengthOfFullname = fullname.length(); // or we can use .size()

    cout << "Concat Using + operator : " << fullname << "\n";
    cout << "Concat Using append : " << fullNameWithAppend << "\n";
    cout << "Length of fullname : " << lengthOfFullname << "\n";

    // acceess string
    string book = "Book";
    char accessBOfBook = book[0];

    cout << "access string at index 0 : " << accessBOfBook << "\n";

    // change string characters
    book[0] = 'J';

    cout << "Change character B to J : " << book << "\n";

    return 0;
}