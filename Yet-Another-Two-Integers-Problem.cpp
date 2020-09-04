
Problem Link - https://codeforces.com/contest/1409/problem/A



Solution----


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
#define foab(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
using namespace std;
 
int main()
{
  boost;
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        
        if(a==b)
        cout<<0<<endl;
        else if(a<b)
        {
            ll d=b-a;
            ll res=0;
            for(ll i=10;i>0;i--)
            {
                res+=d/i;
                d=d%i;
            }
            
            cout<<res<<endl;
        }
        else
        {
            ll d=a-b;
            ll res=0;
            for(ll i=10;i>0;i--)
            {
                res+=d/i;
                d=d%i;
            }
            
            cout<<res<<endl;
            
        }
        
        
    }
    return 0;
}