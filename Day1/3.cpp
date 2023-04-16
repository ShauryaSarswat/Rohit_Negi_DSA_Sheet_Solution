class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        
        int a = arr[0];
        int d = (arr[n-1]-arr[0])/n;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=a)
            {
                return a;
            }
            a+=d;
        }
        return -1;
    }
    
};