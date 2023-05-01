class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string result;
        int i=0;
        int n=S.length();
        
        while(i<n)
        {
            int j=i+1;
            while(j<n && S[j]!='.')
            {
                j++;
            }
            string sub = S.substr(i,j-i);
            if(result.length()==0) result=sub;
            else
            result = sub + "." + result;
            i=j+1;
            
        }
        return result;
    } 
};