class Solution{

    static ArrayList<Integer> downwardDigonal(int n, int A[][])

    {

        ArrayList<Integer>list = new ArrayList<>();

        for(int i = 0;i<n;i++){

            for(int j = 0;j<=i;j++)

                list.add(A[j][i-j]);

        }

        for(int i = 1;i<=n-1;i++){

            for(int j = 0;j<n-i;j++)

                list.add(A[i+j][n-1-j]);

        }

        return list;

    }

}
