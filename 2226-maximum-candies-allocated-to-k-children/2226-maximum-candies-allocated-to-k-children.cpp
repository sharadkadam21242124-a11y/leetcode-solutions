class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long int n=candies.size();
        int ans=0;
        int maxe=candies[0];
        long long int sum=0;
        for(int i=0;i<n;i++){
            maxe= max(maxe,candies[i]);
            sum+=candies[i];
        }
        if(k==1){
            return maxe;
        }
        if(k>sum){
            return ans;
        }
        int str=0;
        long long int end=maxe;
        while(str<=end){
            long long int child=0;
            int check=0;
            long long int mid=str+(end-str)/2;
            if(mid==0){
                mid=1;
            }
            for(int j=0;j<n;j++){
                if(candies[j] >= mid){
                    long long int num=candies[j]/mid;
                    child=child+num;
                }
            }
            if(child < k){
                check=1;
            }
            if(check==1){
                end=mid-1;
            }
            else{
                ans=mid;
                str=mid+1;
            }
        }
        return ans;
    }
};