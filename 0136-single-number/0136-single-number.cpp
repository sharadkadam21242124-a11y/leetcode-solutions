class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int uniq=0; //unique No.
        for(int i=0;i<n;i++){
            uniq^=nums[i];
        }
        return uniq;
    }
};