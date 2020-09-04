
Problem Link - https://codeforces.com/contest/1409/problem/C


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
         ll n,x,y;
        cin>>n>>x>>y;
        
        if(n==2)
        cout<<x<<" "<<y<<endl;
        else
        {
            ll d=y-x;
            ll maxi=0;
            ll tt=n;
            for(ll i=1;i<=d;i++)
            {
              if(d%i==0)
              {
               ll cnt=d/i;
                if(cnt<n)
                {
                maxi=i;
                break;
                }
              }
    
            }
            
            vector<ll>vt;
            for(ll i=x;i<=y;i+=maxi)
            {
              vt.pb(i);
            }
            n=n-(d/maxi);
            while((x-maxi)>0 && n>0)
            {
              vt.pb(x-maxi);
              x=x-maxi;
              n--;
            }
            while(n>0)
            {
              vt.pb(y+maxi);
              y=y+maxi;
              n--;
            }
    
          for(ll i=0;i<tt;i++)
          cout<<vt[i]<<" ";
          
          cout<<endl; 
        }  
        
    }
    return 0;
}