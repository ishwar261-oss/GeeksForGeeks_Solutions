#include <iostream>
#include <vector>
using namespace std;

    bool isPalindrome(int n) {
        int original = n;
        int rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        return original == rev;
    }

    bool isPalinArray(vector<int>& arr) {
        for (int x : arr) {
            if (!isPalindrome(x))
                return false;
        }

        return true;
    }
int main() {
    vector<int> arr = {121, 131, 20, 44};
    if (isPalinArray(arr)) {
        cout << "All numbers are palindromes." << endl;
    } else {
        cout << "Not all numbers are palindromes." << endl;
    }
    return 0;
}