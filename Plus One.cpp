#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Add one to the least significant digit
        digits[n - 1] += 1;
        int carry = digits[n - 1] / 10;
        digits[n - 1] %= 10;

        // Propagate the carry to higher digits
        for (int i = n - 2; i >= 0; i--) {
            if (carry == 0)
                break;

            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }

        // If there is still a carry, insert it at the beginning
        if (carry > 0)
            digits.insert(digits.begin(), carry);

        return digits;
    }
};
