pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> result;
    long long mini = INT_MAX;
    long long maxi = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(mini>a[i])
        {
            mini = a[i];
        }
        if(maxi<a[i])
        {
            maxi = a[i];
        }
    }
    result = make_pair(mini,maxi);
    return result;
    
}