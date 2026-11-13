class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
       int n1 = a.size();
           int n2 = b.size();
           vector<int>ans;
           set<int>s;

           for(int i = 0; i < n1; i++) s.insert(a[i]);
           for(int i = 0; i < n2; i++) s.insert(b[i]);
           for(auto x : s) ans.push_back(x);

           return ans;
        
    }
};