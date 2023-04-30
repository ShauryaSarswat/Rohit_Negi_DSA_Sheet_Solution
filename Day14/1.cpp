class Solution{
public:	
	// Returns area of the largest rectangle of 1's
	int maxArea(vector<bool> mata[], int r, int c) {
	    // code here
	    vector<vector<int>>mat (r,vector<int>(c,0));
	    for(int i = 0; i < r ; i ++){
	        for(int j = 0 ; j < c ; j ++){
	            if(mata[i][j]){mat[i][j] = 1;}
	        }
	    }
	    for(int i = 0 ; i < c ; i ++){
	        for(int j = 0 ; j  < r ; j ++){
	            if(mat[j][i] == 0 || j == 0){
	                continue;
	            } 
	            else mat[j][i] = mat[j - 1][i] + 1;
	           
	        }
	    }
	    int res = 0;
	    for(int i  =0 ;i < r ; i ++){
	        vector<int> tmp(r + 1,0);
	        for(int j = 0 ; j < c ; j ++){
	                tmp[mat[i][j]]++;
	         }

	        for(int j = tmp.size() - 1; j >= 0 ; j--){
	                if(j != tmp.size() - 1){
	                    tmp[j] += tmp[j + 1];
	                }
	            }
    	        for(int j = 1; j < tmp.size() ; j ++){
    	            res = max(res,j * tmp[j]);
    	        }
            }
	    return res;
	}

};