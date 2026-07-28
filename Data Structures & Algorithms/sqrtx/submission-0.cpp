class Solution {
public:
    int mySqrt(int x) {
        int count=0;
        for(long long i=1;i*i<=x;i++){
            count=i;
        }
        return count;
    }
};