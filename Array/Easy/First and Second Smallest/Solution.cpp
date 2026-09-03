class Solution {
public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int x : arr) {
            if (x < first) {
                second = first;
                first = x;
            }
            else if (x < second && x != first) {
                second = x;
            }
        }

        if (second == INT_MAX)
            return {-1};

        return {first, second};
    }
};