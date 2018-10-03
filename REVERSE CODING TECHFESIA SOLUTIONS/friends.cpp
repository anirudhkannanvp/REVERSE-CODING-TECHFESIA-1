#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char a[100];
    while(t--){
        cin>>a;
        if(!strcmp(a,"Monica"))
            cout<<"Chandler"<<"\n";
        else if(!strcmp(a,"Chandler"))
            cout<<"Monica"<<"\n";
        else if(!strcmp(a,"Joey"))
            cout<<"Food"<<"\n";
        else if(!strcmp(a,"Phoebe"))
            cout<<"Mike"<<"\n";
        else if(!strcmp(a,"Mike"))
            cout<<"Phoebe"<<"\n";
        else if(!strcmp(a,"Ross"))
            cout<<"Rachel"<<"\n";
        else if(!strcmp(a,"Rachel"))
            cout<<"Ross"<<"\n";
        else if(!strcmp(a,"Gunther"))
            cout<<"Rachel"<<"\n";
        else
            cout<<"I'll Be There For You"<<"\n";
    }
    return 0;
}

