class Solution {
  public:
    int gcd(int a, int b){
        while(a > 0 && b > 0){
            if(a > b) a %= b;
            else b %= a;
        }
        if(a == 0) return b;
        else return a;
    }
    int lcm(int a, int b) {
        return (a/gcd(a,b)) * b;
    }
};