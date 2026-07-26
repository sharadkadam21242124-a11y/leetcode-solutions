class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
    //     for(int i=1;i<46340;i++){
    //         if(x>=(i*i) && x<((i+1)*(i+1))){
    //             return i;
    //         }
    //     }

        int str=1;
        int end=46339;
        int mid;
        while(str<=end){
            mid=str + (end-str)/2;
            if(x>=(mid*mid) && x<((mid+1)*(mid+1))){
                return mid;
            }
            else if(x<(mid*mid)){
                end=mid-1;
            }
            else{
                str=mid+1;
            }
        }
        return 46340;
    }
};