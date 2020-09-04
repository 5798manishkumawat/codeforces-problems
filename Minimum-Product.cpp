
Problem Link - https://codeforces.com/contest/1409/problem/B



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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        
        a-=x;
        b-=y;
        
        if(n>=a+b)
        {
            ll res=x*y;
            cout<<res<<endl;
        }
        else
        {
            ll res1=0,res2=0;
            ll tt=n;ll a1=a;ll b1=b;
            if(n>=a)
            {
                n-=a;
                a=0;
                if(n>=b)
                {
                    n-=b;
                    b=0;
                }
                else
                b-=n;
                
                res1=(a+x)*(b+y);
            }
            else
            {a-=n;res1=(a+x)*(b+y);}
            
            if(tt>=b1)
            {
                tt-=b1;
                b1=0;
                if(tt>=a1)
                {
                    tt-=a1;
                    a1=0;
                }
                else
                a1-=tt;
                
                res2=(a1+x)*(b1+y);
            }
            else
            {b1-=tt;res2=(a1+x)*(b1+y);}
            
            ll ans=min(res1,res2);
            
            cout<<ans<<endl;
        }
        
    }
    return 0;
}