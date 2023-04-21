class Solution {

  public:

    int fillingBucket(int N) {

        if (N==1) return 1;

        else if(N==2) return 2;

        vector<int> f_b(N);

        f_b[0]=1;

        f_b[1]=2;

        for(int i=2;i<N;i++){

            f_b[i]=(f_b[i-1]+f_b[i-2])%100000000;

        }

        return f_b[N-1];

    }

};
