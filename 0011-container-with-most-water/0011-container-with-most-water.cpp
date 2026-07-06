class Solution {
public:
    int maxArea(vector<int>& height) {
        long int maxW=INT_MIN;
        int curW=0;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j){
         int h=std::min(height[i],height[j]);
         int b=j-i;
         curW=h*b;
         if(curW>maxW){
            maxW=curW;
         }
         if(height[i]<height[j]){
            i++;
         }else{
            j--;
         }
        }
        return maxW;
    }
};