class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                ans^=nums[i];
            }
        }
    return ans;
    }
};