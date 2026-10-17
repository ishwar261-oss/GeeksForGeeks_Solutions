class Solution {
public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long> ans;

        while (true) {
            ans.push_back(n);

            if (n == 1)
                break;

            if (n % 2 == 0)
                n = (long long)sqrt(n);
            else
                n = (long long)pow(n, 1.5);
        }

        return ans;
    }
};