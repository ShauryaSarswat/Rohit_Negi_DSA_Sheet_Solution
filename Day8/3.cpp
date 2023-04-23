class solution
{
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int n,int k){
        // Your code goes here
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(i-1>=0){
                   mat[i][j]+=mat[i-1][j];
               }
               if(j-1>=0){
                   mat[i][j]+=mat[i][j-1];
               }
               if(i-1>=0&&j-1>=0){
                   mat[i][j]-=mat[i-1][j-1];
               }
           }
       }
       //coming out from prefix-sum matrix
       int ans=INT_MIN;
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               int sum=mat[i][j];
               if(i-k>=0){
                   sum-=mat[i-k][j];
               }
               if(j-k>=0){
                   sum-=mat[i][j-k];
               }
               if(i-k>=0 && j-k>=0){
                   sum+=mat[i-k][j-k]; //do bar remove hogya toh ek baar add kro
              
               }
               if(i>=k-1 && j>=k-1){
                   ans=max(ans,sum);
               }
           }
       }
       //coming out
       return ans;
    }  

};
