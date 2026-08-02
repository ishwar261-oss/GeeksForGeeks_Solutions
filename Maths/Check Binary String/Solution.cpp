#include <iostream>
using namespace std;

class Solution {
public:
    bool isBinary(string s) {
        for(auto c : s) {
            if(c != '0' && c != '1') {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string s;
    cin >> s;

    Solution obj;

    if(obj.isBinary(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}