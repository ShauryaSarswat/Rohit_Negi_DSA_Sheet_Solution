class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size();
    int m = matrix[0].size();
    
    vector<bool> rows(n), cols(m);
    
    // iterate over each element in the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 1) {
                rows[i] = true;
                cols[j] = true; 
            }
        }
    }
    
    // set the entire row and column to 1 if rows[i] or cols[j] is true
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(rows[i] || cols[j]) {
                matrix[i][j] = 1;
            }
        }
    }
    }
};