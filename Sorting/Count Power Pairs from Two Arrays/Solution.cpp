
class Solution {
public:
    int countPairs(vector<int>& a, vector<int>& b) {

        sort(b.begin(), b.end());

        int cnt0 = upper_bound(b.begin(), b.end(), 0) -
                   lower_bound(b.begin(), b.end(), 0);

        int cnt1 = upper_bound(b.begin(), b.end(), 1) -
                   lower_bound(b.begin(), b.end(), 1);

        int cnt2 = upper_bound(b.begin(), b.end(), 2) -
                   lower_bound(b.begin(), b.end(), 2);

        int cnt3 = upper_bound(b.begin(), b.end(), 3) -
                   lower_bound(b.begin(), b.end(), 3);

        int cnt4 = upper_bound(b.begin(), b.end(), 4) -
                   lower_bound(b.begin(), b.end(), 4);

        int ans = 0;

        for (int x : a) {

            if (x == 0)
                continue;

            if (x == 1) {
                ans += cnt0;
                continue;
            }

            // Count elements greater than x
            ans += b.end() - upper_bound(b.begin(), b.end(), x);

            // Special cases
            ans += cnt0 + cnt1;

            if (x == 2)
                ans -= cnt3 + cnt4;

            if (x == 3)
                ans += cnt2;
        }

        return ans;
    }
};
