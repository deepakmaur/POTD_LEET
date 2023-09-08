class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        if(numRows==1){
            return {{1}};
        }
        vector<vector<int>> vc;
        for(int i=0;i<numRows;i++){
            vector<int> v(i+1,1);
            for(int j=1;j<i;j++){
                v[j]=vc[i-1][j]+vc[i-1][j-1];
            }
            vc.push_back(v);
        }
        return vc;
    }
};
