class Solution {
public:
    double myPow(double x, long long int n) {
    if(n==0||x==1){
        return 1;
     }
     if(x==0){
        return 0;
     }
     if(n<0){
        x=1/x;
        n=-n;
     }
     double mul=x;
     double ans=1;
     while(n>0){
        if(n%2==1){
            ans*=mul;
        }
        mul*=mul;
        n=n/2;
     }   
     return ans;
    }
};