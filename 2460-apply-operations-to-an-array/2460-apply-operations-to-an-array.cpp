class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<(n-1);i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                nums[k]=nums[j];
                k++;
            }
        }
        while(k<n){
            nums[k]=0;
            k++;
        }
    return nums;
    }
};