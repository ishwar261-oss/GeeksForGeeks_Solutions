class Solution {
  public:
    bool isPrime(int n){
        if(n < 2) return false;
        for(int i = 2; i < n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    
    int primeSum(int n) {
        int temp = n;
        int sum = 0;
        while(temp != 0){
            int digit = temp % 10;
            if(isPrime(digit)) sum += digit;
            temp /= 10;
        }
        return sum;
    }
};