class Solution {
public:
    int reverse(int x) {
        long long x2=x;
        int ans=0;
        int count=0;
        long long int copy=x;
        if(x2<0){
            x2=-x2;
            count++;
        }
        while(x2>0){
             if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
            ans=(ans*10)+(x2%10);
            x2=x2/10;
            copy=ans;
        }
        if(count!=0){
            return -ans;
        }
        else{
            return ans;
        }
    }
};