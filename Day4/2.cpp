 class solution{
    public:
    void sort012(int a[], int n)
    {
        // code here
        int zero = 0;
        int one = 0;
        int two = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                zero+=1;
            }
            else if(a[i]==1)
            {
                one+=1;
            }
            else
            {
                two+=1;
            }
        }
        for(int i=0;i<zero;i++)
        {
            a[i]=0;
        }
        for(int i=0;i<one;i++)
        {
            a[i+zero]=1;
        }
        for(int i=0;i<two;i++)
        {
            a[i+one+zero]=2;
        }
    }
 };