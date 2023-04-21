class Solution{

public:

 int bfs(int n, int m, int num)

    {

        int cnt = 0;

    	queue<int> q;

    	q.push(num);

    	while (!q.empty())

    	{

    		int stepNum = q.front();

    		q.pop();

    		if (stepNum <= m && stepNum >= n)

    			cnt++;

    		if (num == 0 || stepNum > m)

    			continue;

    		int lastDigit = stepNum % 10;

    		int stepNumA = stepNum * 10 + (lastDigit- 1);

    		int stepNumB = stepNum * 10 + (lastDigit + 1);

    		

    		if (lastDigit != 9) 

    		    q.push(stepNumB);

    		if (lastDigit != 0) 

    		    q.push(stepNumA);

    	}

    	return cnt;

    }

    int steppingNumbers(int n, int m)

    {

        int ans = 0;

    	for (int i = 0 ; i <= 9 ; i++){

    	    ans +=	bfs(n, m, i);

    	}

    	return ans;

    }

};
