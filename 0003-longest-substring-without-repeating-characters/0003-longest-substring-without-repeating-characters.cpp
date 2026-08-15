class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=1;
        int maxC=1;
        int j=0;
        int k=0;

        for(int i=1;i<s.length();i++){
            count=1;
            while(j<i){
                if(s[i] != s[j]){
                    count+=1;
                    j++;
                }
                else{
                    k=j+1;
                    break;
                }
            }
            maxC = max(maxC,count);
            j=k;
        }
        return s.length()==0?0:maxC;
    }
};