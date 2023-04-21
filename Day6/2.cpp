class solution{
    public:
    int numofsubset(int arr[], int n)
    {
        // Your code goes here
        int count=0;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]!=1){
                count++;
            }
        }
        return count+1;
        
    }
};