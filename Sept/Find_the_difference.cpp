class Solution {
public:
    char findTheDifference(string s, string t) {
        long long sum=0;
        for(int i=0;i<s.length();i++){
            sum=sum+s[i];
        }
        long long sum2=0;
        for(int i=0;i<t.length();i++){
            sum2=sum2+t[i];
        }

        long long r=sum2-sum;

        return char(r);
        

    }
};
