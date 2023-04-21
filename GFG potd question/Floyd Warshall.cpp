class Solution {

  public:

	void shortest_distance(vector<vector<int>>&matrix){	    int n = matrix.size();

	    for(int via = 0; via < n; via++){

	        for(int i = 0; i < n; i++){

	            for(int j = 0; j < n; j++){

	                int curr = INT_MAX;

	                if(matrix[i][via] != -1 && matrix[via][j] != -1){

	                    curr = matrix[i][via] + matrix[via][j];

	                }

	                if(curr != INT_MAX){

	                    matrix[i][j] = matrix[i][j] == -1 ? curr : min(matrix[i][j], curr);

	                }

	            }

	        }

	    }

	    return;

	}

};
