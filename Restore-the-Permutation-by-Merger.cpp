
Problem Link - https://codeforces.com/contest/1385/problem/B


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
        ll n;
        cin>>n;
        map<ll,ll>mp;
        n=2*n;
        ll a[n];
        fo(i,n)
        {
            cin>>a[i];
            mp[a[i]]=0;
        }
        
        fo(i,n)
        {
            if(mp[a[i]]==0)
            {
                cout<<a[i]<<" ";
                mp[a[i]]=1;
            }
        }
        cout<<endl;
    }


return 0;
} 