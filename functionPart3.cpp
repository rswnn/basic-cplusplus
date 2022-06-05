#include <iostream>
using namespace std;

// pass array

int multiplicationOfArray(int* numbers) {
    int result = 1;

    int size = *numbers / sizeof(*numbers);

    for (int i = 0; i < size; i++) {
        result *= numbers[i];
    }
    return result;
}

int main() {
    int nums[5] = {20, 10, 20, 30, 2};

    multiplicationOfArray(nums);

    cout << "result of multiplication of array : " << multiplicationOfArray(nums) << "\n";

    return 0;
}