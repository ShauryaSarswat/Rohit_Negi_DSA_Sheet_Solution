class solution{
    public:
        long long int totalFine(int n, int date, int car[], int fine[])
        {
            long long int oddFine = 0;
            long long int evenFine = 0;
            for(int i=0;i<n;i++)
            {
                if(car[i]%2==0)
                {
                    oddFine+=fine[i];
                }
                else
                {
                    evenFine+=fine[i];
                }
            }
            if(date%2==0)
            return evenFine;
            return oddFine;
            
            
        }
};