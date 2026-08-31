class Solution {
  public:
    void arranged(vector<int>& arr) {
        vector<int> pos, neg;

        for (int x : arr) {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        int j = 0;

        for (int i = 0; i < pos.size(); i++) {
            arr[j++] = pos[i];
            arr[j++] = neg[i];
        }
    }
};