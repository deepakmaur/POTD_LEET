class Solution {
public:
    int countOrders(int n) {
        int md=1e9+7;
        long long cnt=1;
        for(int i=2;i<=n;i++){
            cnt=(cnt*(2*i-1)*i)%md;
        }

        return int(cnt);
    }
};
