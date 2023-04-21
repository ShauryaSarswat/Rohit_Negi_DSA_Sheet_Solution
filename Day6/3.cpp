class solution
{
    public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *result=new int[n];
        map<int,int>hash_table;
        for(int i=0;i<n;i++)
        {
            hash_table[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(hash_table[i]==2)
            {
                result[0]=i;
            }
            if(hash_table[i]==0)
            {
                result[1]=i;
                
            }
        }
        return result;
    }
};