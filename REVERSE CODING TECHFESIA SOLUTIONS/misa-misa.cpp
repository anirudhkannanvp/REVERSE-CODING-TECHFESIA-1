#include<bits/stdc++.h>
using namespace std;


 
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

		sort(a.begin(),a.end());
		if(n%2==1){

			int mid = n/2;
			float median = a[mid];
			printf("%d %.1f %d\n",a[0],median,a[n-1]);
		}
		else{
			int mid1=n/2;
			int mid2=mid1-1;
			float median = (a[mid1]+a[mid2])/2.0;
			printf("%d %.1f %d\n",a[0],median,a[n-1]);
		}

		

		// cout << *min_element(a.begin(),a.end()) << " " << median << " " << *max_element(a.begin(),a.end()) << endl;
		

	}
	return 0;
}