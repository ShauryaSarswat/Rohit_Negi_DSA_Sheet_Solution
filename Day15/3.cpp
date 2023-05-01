class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        // occurences = []
        if(s1.size()!=s2.size())
        {
            return false;
        }
        vector<int> occurences;
        
        // for i in range(len(s1)):
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[0])
            {
                occurences.push_back(i);
            }
        }
        
        for(int i=0;i<occurences.size();i++)
        {
            string temp;
            for(int j=occurences[i];j<s1.size();j++)
            {
                temp+=s1[j];
            }
            for(int j=0;j<occurences[i];j++)
            {
                temp+=s1[j];
            }
            if(temp==s2)
            {
                return true;
            }
        }
        return false;
        
    }
};