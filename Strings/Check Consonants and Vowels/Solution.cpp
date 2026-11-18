
class Solution {
  public:
    int checkString(string& s) {
        int vowels = 0;
        int consonants = 0;

        for(char ch : s) {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }

        if(vowels > consonants) return 1;
        if(vowels < consonants) return -1;

        return 0;
    }
};
