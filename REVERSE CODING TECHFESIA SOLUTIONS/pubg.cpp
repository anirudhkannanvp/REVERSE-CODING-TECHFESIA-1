#include<bits/stdc++.h>
using namespace std;

vector<string> b={"Buggy","Kar 98 K","Groza","AKM","M416A","Tommy Gun","Vector","8x","4x","6x","2x"};
bool mycmp(string &m, string &n){
    return (find(b.begin(),b.end(),m)-b.begin()) < (find(b.begin(),b.end(),n)-b.begin());
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a;
        getchar();
        for(int i=0;i<n;i++){
            string p;
            getline(cin,p);
           
            a.push_back(p);

        }
        sort(a.begin(),a.end(), mycmp);
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}