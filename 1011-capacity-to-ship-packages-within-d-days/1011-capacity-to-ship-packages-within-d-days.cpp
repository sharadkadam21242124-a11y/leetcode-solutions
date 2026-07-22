class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int ans;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int str=0;
        int end=sum;
        while(str<=end){
            int Rdays=1;
            int capacity=0;
            int check=0;
            int mid=str+(end-str)/2;
            for(int j=0;j<n;j++){
                if(weights[j] > mid){
                    check=1;
                    break;
                }
                if((capacity + weights[j]) <= mid){
                    capacity+=weights[j];
                }
                else{
                    Rdays++;
                    capacity=weights[j];
                }
            }
            if(Rdays > days){
                check=1;
            }
            if(check==1){
                str=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};