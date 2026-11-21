
class Solution {
public:
    int divisibleByDigits(string& s) {
        int ans = 0;
        
        int n = stoi(s);

        for (char c : s) {
            int digit = c - '0';

            if (digit != 0 && n % digit == 0) {
                ans++;
            }
        }

        return ans;
    }
};
