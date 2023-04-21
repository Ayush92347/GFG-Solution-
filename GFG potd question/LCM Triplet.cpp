class Solution {

  public:

     long long gcd(long long a, long long b){

        if(b==0) return a;

        else gcd(b,a%b);

    }

    long long lcmTriplets(long long N) {

        if(N==1) return 1;

        long long lcm=(N*(N-1))/gcd(N,N-1);

        if(N&1) return (lcm*(N-2))/gcd(lcm,N-2);

        else{

            long long lcm_=((N-1)*(N-2))/gcd(N-1,N-2);

            return max(((lcm*(N-3))/gcd(lcm,N-3)),(lcm_*(N-3))/gcd(lcm_,N-3));

        }

    }

};
