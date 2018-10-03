#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}

		int mid = n/2;
		if(n%2==0){
			int sum1 = a[0] , sum2 = a[mid];
			for(int i=1;i<mid;i++){
				sum1= sum1 - a[i];
			}

			for(int i=mid+1;i<n;i++){
				sum2 = sum2 + a[i];
			}
			// cout << "sum1: " << sum1 << " sum2: " << sum2 << endl;
			cout << (ll)sum1*sum2 << endl;
		}
		else{
			int sum1=a[0], sum2=a[mid];
			for(int i=1; i<=mid; i++){
				sum1=sum1-a[i];
			}

			for(int i=mid+1;i<n;i++){
				sum2 = sum2 + a[i];
			}

			// cout << "sum1: " << sum1 << " sum2: " << sum2 << endl;
			cout << (ll)sum1*sum2 << endl;

		}

	}

	return 0;
}