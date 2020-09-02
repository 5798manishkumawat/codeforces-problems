
Problem Link - https://codeforces.com/contest/1385/problem/A


Solution-------



#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    boost;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z;cin>>x>>y>>z;
        
        if(x==y && y==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<x<<endl;
        }
        else if((x==y && z<x) || (y==z && x<z) || (x==z && y<x))
        {
            ll m=min(x,min(y,z));
            ll mm = max(x,max(y,z));
            cout<<"YES"<<endl;
            cout<<mm<<" "<<m<<" "<<1<<endl;
        }
        else
        cout<<"NO"<<endl;
        
        
    }


return 0;
} 