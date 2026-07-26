class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long int n=digits.size();
        int i=1;
        while(true){
            if(i==(n+1)){
                digits.push_back(1);
                int copy=digits[digits.size()-1];
                for(int j=1;j<digits.size();j++){
                    digits[j]=digits[j-1];
                }
                digits[0]=copy;
                break;
            }
            else if(digits[n-i]<9){
                digits[n-i]=digits[n-i]+1;
                break;
            }
            else{
                digits[n-i]=0;
            }
            i++;
        }
        return digits;
    }
};