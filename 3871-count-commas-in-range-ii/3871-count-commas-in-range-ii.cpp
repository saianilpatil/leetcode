class Solution {
public:
    using ll=long long;
    long long countCommas(long long n) {
        return max(0LL, n+1-1000)+max(0LL, n+1-(ll)1e6)+max(0LL, n+1-(ll)1e9)+max(0LL, n+1-(ll)1e12)+max(0LL, n+1-(ll)1e15);
    }
};