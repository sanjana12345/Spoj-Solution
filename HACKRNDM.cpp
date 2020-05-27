#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int n, int k)
{
    int count = 0;
    sort(arr, arr+n);  
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else 
              r++;
    }   
    return count;
}
 
int main()
{int n,k;
cin>>n>>k;
int arr[n];
for(int i=0; i<n; i++)
{
	cin>>arr[i];
}

    cout <<find(arr, n, k);
    return 0;
}
