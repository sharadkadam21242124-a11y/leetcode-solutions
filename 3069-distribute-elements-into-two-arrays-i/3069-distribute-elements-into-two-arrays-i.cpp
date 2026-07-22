class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> result;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(arr1[arr1.size()-1] > arr2[arr2.size()-1]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);      
            }
        }
        result.reserve(arr1.size() + arr2.size());
        result.insert(result.end(), arr1.begin(), arr1.end());
        result.insert(result.end(), arr2.begin(), arr2.end());

        return result;
    }
};