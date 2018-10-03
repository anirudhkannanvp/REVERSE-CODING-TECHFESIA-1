// AVENGERS - BRING ME THANOS
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;

ll findLongestRepeatingSubSeq(string str) 
{ 
    ll n = str.length(); 
  
    // Create and initialize DP table 
    ll dp[n+1][n+1]; 
    for (ll i=0; i<=n; i++) 
        for (ll j=0; j<=n; j++) 
            dp[i][j] = 0; 
  
    // Fill dp table (similar to LCS loops) 
    for (ll i=1; i<=n; i++) 
    { 
        for (ll j=1; j<=n; j++) 
        { 
            // If characters match and indexes are  
            // not same 
            if (str[i-1] == str[j-1] && i != j) 
                dp[i][j] =  1 + dp[i-1][j-1];           
                       
            // If characters do not match 
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]); 
        } 
    } 
    return 2*dp[n][n]; 
} 
  
// Driver Program 
int main() 
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    ll t,c1,c2;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        c1=findLongestRepeatingSubSeq(s1);
        c2=findLongestRepeatingSubSeq(s2);
        if(c1<c2)
            cout<<c1<<" "<<c2<<" "<<"Thanos Wins!!";
        else if(c1>c2)
            cout<<c1<<" "<<c2<<" "<<"Avengers Win!!";
        else
            cout<<c1<<" "<<c2<<" "<<"Tie-InfinityWar3";
        cout<<"\n";
    }
    return 0; 
}