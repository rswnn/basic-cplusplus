#include <iostream>
using namespace std;

enum Week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

// Changing Default Value of Enums

enum Seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

enum Suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

// This allows you to choose two or more flags at once.
enum DesignFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main() {
    Week today;
    today = Wednesday;
    cout << "Day : " << today + 1 << endl;

    Seasons s;
    s = summer;
    cout << "Summer = " << s << endl;

    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes." << endl;

    int myDesign = BOLD | UNDERLINE;
    cout << myDesign << endl;
    if (myDesign & BOLD) {
        cout << "is same" << endl;
    }

    return 0;
}