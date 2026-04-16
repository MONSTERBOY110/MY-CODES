class Solution {
  public:
    int Digit(char ch){
        if(ch-'0' >= 0 && ch-'0' <= 9){
            return ch-'0';
        }
        return -1;
    }
    int myAtoi(string &s) {
        // code here
        long int num = 0;
        int sign = 1;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '-' && num == 0) sign = -1;
            
            int digit = Digit(s[i]);
            if(digit == -1 && num> 0) break;
            
            else if(digit != -1){
                num = num*10+digit;
            }else{
                continue;
            }
        }
        
        num = num*sign;
        if(num >= INT_MAX || num <= INT_MIN){
            if(num > 0) return INT_MAX;
            return INT_MIN;
        }
        
        return num;
    }
};
