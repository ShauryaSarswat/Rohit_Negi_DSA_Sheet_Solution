class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        int res=0,ans=0;
       for(int i=0;i<n;i++){
           if(a[i]=='1'){
               res += 1;
           }
       }
       
        return (res*(res-1))/2;
        
    }

};