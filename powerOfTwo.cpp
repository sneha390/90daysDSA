#include <iostream>
#include <climits>

bool isPowerOfTwo(int n) {
    int ans = 1;

    for (int i = 0; i <= 30; ++i) {
        if (ans == n) {
            return true;
        }

        if (ans < INT_MAX / 2) {
            ans *= 2;
        }
    }

    return false;
}

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPowerOfTwo(number)) {
        std::cout << number << " is a power of two." << std::endl;
    } else {
        std::cout << number << " is not a power of two." << std::endl;
    }

    return 0;
}
