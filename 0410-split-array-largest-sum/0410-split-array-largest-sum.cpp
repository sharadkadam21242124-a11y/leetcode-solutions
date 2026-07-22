class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int ans;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int str=0;
        int end=sum;
        while(str<=end){
            int subArr=1;
            int subSum=0;
            int check=0;
            int mid=str+(end-str)/2;
            for(int j=0;j<n;j++){
                if(nums[j] > mid){
                    check=1;
                    break;
                }
                if((subSum + nums[j]) <= mid){
                    subSum+=nums[j];
                }
                else{
                    subArr++;
                    subSum=nums[j];
                }
            }
            if(subArr > k){
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