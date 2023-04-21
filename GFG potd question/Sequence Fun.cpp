class Solution {

	public:		int NthTerm(int n){

		    long long int mod = 1e9+7 ;

		    

		    long long int sum = 1 ;

		    

		    

		    for(int i = 1; i<= n ; i++)

		    {

		        sum = ((sum* i)%mod + 1)%mod ;

		    }

		    

		    return sum ;

		}

};
