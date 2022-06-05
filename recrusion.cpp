#include <iostream>
using namespace std;

int sum(int num) {
    if (num > 0) {
        return num + sum(num - 1);
    } else {
        cout << "Fired \n";
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    int result = sum(10);
    cout << result;
    return 0;
}
