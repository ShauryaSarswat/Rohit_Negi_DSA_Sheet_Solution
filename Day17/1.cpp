class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        if (N == 1)
            return arr[0];

        string prefix = "";
        int n = min(arr[0].length(), arr[1].length());

        for (int i = 0; i < n; i++)
            if (arr[0][i] == arr[1][i])
                prefix += arr[0][i];
            else
                break;

        for (int i = 2; i < N; i++)
        {
            n = (int)arr[i].length();
            if (n < prefix.length())
                prefix = prefix.substr(0, n);
            for (int j = 0; j < n; j++)
            {
                if (!prefix.length())
                    return "-1";
                if (arr[i][j] != prefix[j])
                {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }
        if (prefix.length())
            return prefix;
        return "-1";
    }
};