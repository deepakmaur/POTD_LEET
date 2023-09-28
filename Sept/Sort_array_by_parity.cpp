class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> vc;
        

        vector<int> a;
        vector<int> v;

        for(int i=0;i<nums.size();i++){
            if(nums[i]&1){
                vc.push_back(nums[i]);
            }
            else{
                v.push_back(nums[i]);
            }
        }

        for(int i=0;i<v.size();i++){
            a.push_back(v[i]);
        }

        for(int i=0;i<vc.size();i++){
            a.push_back(vc[i]);
        }

        return a;
    }
};
