#include<iostream>
#include<vector>
using namespace std;

int countOfElements(int x, vector<int> &arr) {
       int n = arr.size();
       int count = 0;
       for(int i = 0; i < n; i++){
           if(arr[i] <= x) count ++;
       }
    
     return count;   
    }

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int x = 3;
    int result = countOfElements(x, arr);
    cout << "Count of elements smaller than or equal to " << x << " is: " << result << endl;
    return 0;
}