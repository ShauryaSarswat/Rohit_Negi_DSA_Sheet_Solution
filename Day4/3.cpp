class solution{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)
        return 1;
        long long int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        long long int cursum = a[0];
        
        for(int i=1;i<n;i++)
        {
            if(cursum==sum-cursum-a[i])
            {
                return i+1;
            }
            cursum+=a[i];
        }
        return -1;
    }
};
