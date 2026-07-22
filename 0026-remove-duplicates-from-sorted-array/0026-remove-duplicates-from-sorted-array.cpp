class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n,0);
        vec[0]=nums[0];
        int j=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                vec[j]=nums[i];
                j++;
            }
        }
        for(int k=0;k<n;k++){
            nums[k]=vec[k];
        }
        return j;
    }
};