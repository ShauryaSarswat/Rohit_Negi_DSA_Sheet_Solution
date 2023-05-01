class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	     int n=S.size();
        reverse(S.begin(),S.end());
        string k=S.substr(0,n);
        reverse(S.begin(),S.end());
        if(k==S)
        {
            return 1;
        }
        else{
            return 0;
        }
       
	}

};