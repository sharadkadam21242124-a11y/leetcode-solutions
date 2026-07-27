class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec(rowIndex+1);
        vec[0]={1};
        for(int i=1;i<(rowIndex+1);i++){
            vec[i].push_back(1);
            for(int j=0;j<(vec[i-1].size()-1);j++){
                int a= vec[i-1][j] + vec[i-1][j+1];
                vec[i].push_back(a);
            }
            vec[i].push_back(1);
        }
        return vec[rowIndex];
    }
};