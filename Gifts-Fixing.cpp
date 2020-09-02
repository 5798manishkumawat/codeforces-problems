
Problem Link - https://codeforces.com/contest/1399/problem/B


Solution-------



#include<bits/stdc++.h>
#define ll long long int
#define fo(i,n) for(ll i=0;i<n;i++)
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
         ll a[n];
         ll b[n];
         vector<pair<ll,ll>>vt;
         fo(i,n)
         {
             cin>>a[i];
             vt.push_back({a[i],0});
         }
         
        fo(i,n)
        {
            cin>>b[i];
            vt[i].second=b[i];
        }
        
        sort(a,a+n);
        sort(b,b+n);
        ll ma=a[0];
        ll mb=b[0];
        ll res=0;
        fo(i,n)
        {
            vt[i].first-=ma;
            vt[i].second-=mb;
            ll x=vt[i].first;
            ll y=vt[i].second;
            ll m=min(x,y);
            
            res+=m+(x-m)+(y-m);
        }
        
        cout<<res<<endl;
     }
     
return 0;
}