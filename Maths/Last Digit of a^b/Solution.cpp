
class Solution {
public:
    int getLastDigit(string& a, string& b) {
        if (b == "0") return 1;

        int last = (a.back() - '0');
        int power = 0;

        for (char c : b) {
            power = (power * 10 + (c - '0')) % 4;
        }

        if (power == 0) power = 4;

        int ans = 1;

        for (int i = 0; i < power; i++) {
            ans = (ans * last) % 10;
        }

        return ans;
    }
};
