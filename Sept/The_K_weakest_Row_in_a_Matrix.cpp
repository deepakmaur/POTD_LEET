
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        
        set<pair<int,int>> s;
        int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row;i++){
          int sum=0;
          for(int j=0;j<col;j++){
            sum=sum+mat[i][j];
          }
          
          s.insert({sum,i});
        }

        vector<int> v;
        for(auto x=begin(s);k>0;k--,x++){
          v.push_back(x->second);
        }
        
          
          
        

        return v;
    }
};
