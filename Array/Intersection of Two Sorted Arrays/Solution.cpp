class Solution {
public:
   vector<int> intersection(vector<int>& a, vector<int>& b) {
    set<int> s;
    set<int> ans;

    for(int i = 0; i < a.size(); i++) {
        s.insert(a[i]);
    }

    for(int i = 0; i < b.size(); i++) {
        if(s.find(b[i]) != s.end()) {
            ans.insert(b[i]);
        }
    }

    return vector<int>(ans.begin(), ans.end());

    // int n1 = a.size();
    // int n2 = b.size();
    // vector<int>ans;
    // int j= 0, i= 0;
    // while(i < n1 && j < n2){
    //     if(a[i] < b[j]){
    //         ans.push_back(a[i]);
    //         i++;
    //     }else if(a[i] > b[j]){
    //         ans.push_back(b[j]);
    //         j++;
    //     }else{
    //         ans.push_back(a[i]);
    //         i++;
    //         j++;
    //     }
    // }
    // while(i < n1){
    //     if(ans.size() == 0 || ans.back() != a[i])
    //         ans.push_back(a[i]);
    // }
    // while(j < n2){
    //     if(ans.size() == 0 || ans.back() != b[j])
    //         ans.push_back(b[j]);
    // }

    // return ans;
}
};