class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        stack<int> st;
        vector<int> ans;

        for(int i=nums2.size()-1;i>=0;i--){
            while(st.size()>0 && nums2[st.top()] <= nums2[i]){
                st.pop();
            }

            if(st.size()==0){
                map[nums2[i]]=-1;
            }
            else{
                map[nums2[i]]=nums2[st.top()];
            }
            st.push(i);
        }
        for(int j=0;j<nums1.size();j++){
            ans.push_back(map[nums1[j]]);
        }
        return ans;
    }
};