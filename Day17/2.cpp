class Solution {
  public:
    int val(char ch)
    {
        if(ch=='I')
        return 1;
        else if(ch=='V')
        return 5;
        else if(ch=='X')
        return 10;
        else if(ch=='L')
        return 50;
        else if(ch=='C')
        return 100;
        else if(ch=='D')
        return 500;
        else if(ch=='M')
        return 1000;
    }
    int romanToDecimal(string &str) {
        
        int ans=0;
        int preval=0;
        for(int i=str.length()-1;i>=0;i--)
        {
           char ch=str[i];
           int value=val(ch);
           if(value>=preval)
           ans+=value;
           else
           ans-=value;
           preval=value;
        }
        return ans;
    }
};