class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int rev=0;
        int digit,original;
        original = x;

        while(x!=0){
            digit=x%10;

            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7))
            return false;

            rev=(rev*10)+digit;
            x=x/10;
        } 
        return rev==original;
        
    }
};