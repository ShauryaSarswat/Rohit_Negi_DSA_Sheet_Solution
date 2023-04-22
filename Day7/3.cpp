class solution{
    public:
        // arr: input array
        // n: size of array
        //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
        //with O(1) extra space.
        void arrange(long long arr[], int n) {
            // Your code here
            int max=n;
            for(int i=0;i<n;i++){
                
                int x=(int)arr[i];
                long y=arr[x];
                arr[i]=((y%max))*max+x;
            }
            for(int i=0;i<n;i++){
                arr[i]/=max;}
        }
};
