class Solution {
public:
    bool isPalindrome(int x) {
        int x2=x;
        long int rev=0;
        if(x==0){
            return true;
        }
        if((x<0) || (x%10==0)){
            return false;
        }
        while(x>0){
            rev=(rev*10)+(x%10);
            x=x/10;
        }
        return (x2==rev);
    }
};