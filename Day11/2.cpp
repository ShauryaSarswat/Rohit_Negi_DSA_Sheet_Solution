int sum = arr[0], mxSum= arr[0], mnSum =arr[0];
      int mx =arr[0], mn =arr[0];
        for(int i = 1; i < num; i++)
        {
            mx = max(arr[i], mx+arr[i]);
            mxSum = max(mxSum, mx);
            mn = min(arr[i], mn+arr[i]);
            mnSum = min(mnSum, mn);
            sum += arr[i];
        }
        return mxSum > 0 ? max(mxSum, sum-mnSum) : mxSum;