class Solution {
public:
    bool isPerfectSquare(int num) {
        int str=1;
        int end=46340;
        int mid;
        while(str<=end){
            mid=str + (end-str)/2;
            if(num==(mid*mid)){
                return true;
            }
            else if(num<(mid*mid)){
                end=mid-1;
            }
            else{
                str=mid+1;
            }
        }
        return false;
    }
};