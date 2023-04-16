class solution{
    public:
        void binSort(int A[], int N)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int countZero = 0;
        int countOne = 0;
        for(int i=0;i<N;i++)
        {
            if(A[i]==0)
            {
                countZero+=1;            }
            else
            {
                countOne+=1;
            }
        }
        for(int i=0;i<countZero;i++)
        {
            A[i] = 0;
        }
        for(int i=0;i<countOne;i++)
        {
            A[countZero+i] = 1;
        }
        
    }

};