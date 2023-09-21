class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        int s3=s1+s2;

        vector<int> vc;
        for(int i=0;i<s1;i++){
            vc.push_back(nums1[i]);
        }

        for(int i=0;i<s2;i++){
            vc.push_back(nums2[i]);
        }

        sort(vc.begin(),vc.end());

        if(s3%2!=0){
            double d=vc[s3/2];
            return d;
        }
        else{
            double first=vc[s3/2];
            double second=vc[s3/2 -1 ];
            double d= (first+second) /2;
            return d;
        }
    }
};
