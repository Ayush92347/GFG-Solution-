class Solution{
private:
    long long cnts[3][64];
public:
    void precompute()
    {
        // build searching table
        cnts[0][63] = cnts[1][63] = cnts[2][63] = 0ll;
        
        // Code Here
        for (int i = 0; i < 63; i++) {
            cnts[0][i] = i + 1;
            
            if (i < 2) {
                cnts[1][i] = 0;
            } else {
                cnts[1][i] = i - 1 + cnts[1][i-1];
            }
            
            if (i < 3) {
                cnts[2][i] = 0;
            } else {
                cnts[2][i] = cnts[1][i-1] + cnts[2][i-1];
            }
        }
    }
    
    long long solve(long long l, long long r){
        // Code Here
        long long res = 0;

        if (l < 1 || r < l || r > 1000000000000000000) {
            return -1;
        }
        
        long long l_cnt = 0, r_cnt = 0;
        
        // [l, r] ~ (l-1, r]
        l--;
        
        // searching all possible 3bits numbers from table
        for (int i = 2; i >= 0; i--) {
            if (l > 0) {
                int cl = 63 - __builtin_clzll(l);
                l_cnt += cnts[i][cl];
                
                l ^= 1ll << cl;
            }
            
            if (r > 0) {
                int cr = 63 - __builtin_clzll(r);
                r_cnt += cnts[i][cr];
                
                r ^= 1ll << cr;
            }
        }
        
        return (r_cnt - l_cnt);
    }
    
};
