#include <bits/stdc++.h> 
using namespace std; 
  
#define MOD 1000000007 
  
typedef long long ll;
int calculateSum(int n, int k) 
{ 
    // initialize res 
    long long res = 1; 
  
    // loop to calculate n^k % MOD 
    // using modular Arithmetic 
    while (k > 0) { 
  
        // if k is odd 
        // multiply it with res 
        if (k & 1) 
            res = (res * n) % MOD; 
  
        // k must be even now 
        // change k to k/2 
        k = k / 2; 
  
        // change n to  n^2 
        n = (n * n) % MOD; 
    } 
    return res; 
} 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		for(int i=1;i<=n;i++){
            // cout << (ll)(calculateSum(i,k)-(ll)calculateSum(i-1,k)) << " ";
			cout << (ll)((ll)((ll)calculateSum(i,k)-(ll)calculateSum(i-1,k))*(n-k)) << " " ;
		}

		cout << endl;
	}
	return 0;
}