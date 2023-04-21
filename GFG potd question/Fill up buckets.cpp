class Solution{

	public:    int totalWays(int n, vector<int>capacity) {

    	long long int mod = 1000000007;

    	sort(capacity.begin(), capacity.end());

    	bool flag = false;

    	long long int ans = 1;

    	

    	for(int i = n-1; i>=0; i--){

    		if(capacity[i] < i){

    			flag = true;

    			break;

    		}

    		else

    			ans = (ans % mod * (capacity[i] - i)%mod)%mod;

    	}

    	if(flag)

    		return 0;

    	return int(ans);

    }

};
