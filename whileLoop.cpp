#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int j = 0;

    // while loop
    while (i < 10) {
        cout << "I : " << i + 1 << "\n";
        i++;
    }

    // do while loop
    do {
        cout << "J : " << j + 1 << "\n";
        j++;
    } while (j < 10);

    return 0;
}