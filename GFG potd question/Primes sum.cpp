class Solution {

public:

    string isSumOfTwo(int N){

        // code here

        vector<bool> isPrime(N + 1, true);

        for(int i = 2; i * i <= N; i++){

            if(isPrime[i]){

                for(int j = i * i; j <= N; j=j+i){

                    isPrime[j] = false;

                }

            }

        }

        for(int i = N; i > 1; i--){

            if(isPrime[i] && (isPrime[N - i] && N - i > 1)){

                return "Yes";

            }

        }

        return "No";

    }

};
