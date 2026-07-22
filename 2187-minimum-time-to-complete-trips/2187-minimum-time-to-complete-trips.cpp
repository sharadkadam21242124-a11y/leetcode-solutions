class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        int mine=INT_MAX;
        long long ans;
        for(int i=0;i<n;i++){
            mine= min(time[i],mine);
        }
        if(n==1){
            ans=mine;
            return ans*totalTrips;
        }
        long long int str=0;
        long long end=mine;
        end=end*totalTrips;
        while(str<=end){
            long long int mid =str +(end-str)/2;
            long long int Ttrip=0;
            for(int j=0;j<n;j++){
                Ttrip+=mid/time[j];
                if(Ttrip>=totalTrips){
                    break;
                }
            }
            if(Ttrip<totalTrips){
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