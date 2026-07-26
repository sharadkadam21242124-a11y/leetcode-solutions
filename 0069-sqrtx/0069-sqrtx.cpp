class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        for(int i=1;i<46340;i++){
            if(x>=(i*i) && x<((i+1)*(i+1))){
                return i;
            }
        }
        return 46340;
    }
};