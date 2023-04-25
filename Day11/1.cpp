#include <bits/stdc++.h>
using namespace std;
 
void findMajority(int arr[], int size)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < size; i++)
        mp[arr[i]]++;
    
    for(auto i : m)
    {
        if(i.second > size / 2)
        {
            return i.first;
        }
    }
   return -1;
}
 
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int result = majorityElement(arr,n);
    cout<<result;
 
    return 0;
}