//MAROON 5
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--){
        cin>>n;
        if(n%5==0)
            cout<<n<<"\n";
        else
            cout<<n+5<<"\n";
    }

    return 0;
}
