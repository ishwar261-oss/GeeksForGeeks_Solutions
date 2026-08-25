#include <bits/stdc++.h>
using namespace std;

    pair<int, int> countOddEven(vector<int> &arr) {
       int evenCount = 0;
       int oddCount = 0;
       
       for(int x : arr){
           if(x%2==0) evenCount++;
           else oddCount++;
       }
       
       return {oddCount, evenCount};
    }

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    pair<int, int> result = countOddEven(arr);
    cout << "Odd Count: " << result.first << ", Even Count: " << result.second << endl;
    return 0;
}
