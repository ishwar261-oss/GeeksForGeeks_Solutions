class Solution{
    public :
    void reverseArray(vector<int>& arr, int n) {
     
        int n = arr.size();
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5};
    Solution s;
    s.reverseArray(arr, arr.size());
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}