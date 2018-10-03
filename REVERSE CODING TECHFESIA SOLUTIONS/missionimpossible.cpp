//MISSION IMPOSSIBLE- 6 FALLOUT
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
 
ll maxSumBitonicSubArr(ll arr[], ll n) 
{ 

    ll msis[n], msds[n]; 
    ll max_sum = INT_MIN; 
    msis[0] = arr[0]; 
    for (ll i=1; i<n; i++) 
        if (arr[i] > arr[i-1]) 
            msis[i] = msis[i-1] + arr[i]; 
        else
            msis[i] = arr[i];     

    msds[n-1] = arr[n-1]; 
    for (ll i=n-2; i>=0; i--) 
        if (arr[i] > arr[i+1]) 
            msds[i] = msds[i+1] + arr[i]; 
        else
            msds[i] = arr[i]; 

    for (ll i=0; i<n; i++)              
        if (max_sum < (msis[i] + msds[i] - arr[i])) 
            max_sum = msis[i] + msds[i] - arr[i];  
    return max_sum; 
} 
  
// Driver program to test above 
int main() 
{ 
   ll t,n,c,i;
   cin>>t;
   ll inarr[4000];
   while(t--){
      cin>>n;
       for(i=0;i<n;i++)
           cin>>inarr[i];
       c=maxSumBitonicSubArr(inarr,n);
       cout<<c*n<<"\n";      
   }
}