
Problem Link - https://codeforces.com/contest/1391/problem/B

Solution----------


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;
 
int main()
{
    boost;
    ll t;cin>>t;
    while(t--)
    {
        ll n,m;
        
        cin>>n>>m;
        char a[n][m];
        fo(i,n)
        {
            fo(j,m)
            {
                cin>>a[i][j];
            }
        }
        
        
        ll res=0;
        
        fo(i,n-1)
        {
            if(a[i][m-1]=='R')
            res++;
        }
        
        
        fo(i,m-1)
        {
            if(a[n-1][i]=='D')
            res++;
        }
    
        cout<<res<<endl;
    }
return 0;
} 