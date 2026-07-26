class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.reserve(nums1.size() + nums2.size());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        if((nums1.size()-1)%2==0){
            return nums1[(nums1.size()-1)/2];
        }
        double x1=nums1[((nums1.size()-1))/2];
        double x2=nums1[(nums1.size()+1)/2];
        double ans= x1/2 + x2/2;
        return ans;
    }
};