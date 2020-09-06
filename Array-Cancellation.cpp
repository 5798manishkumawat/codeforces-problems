
Problem Link -https://codeforces.com/contest/1405/problem/B



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
        
       ll n;
       cin>>n;
    
        ll x;
        ll pg=0;ll ng=0;
        fo(i,n)
        {
            cin>>x;
            
            if(x>=0)
            {
                pg+=x;
            }
            else
            {
                if(pg>0)
                {
                    ll d=abs(x);
                    ll y=min(d,pg);
                    pg-=y;
                    ng=ng+x+y;
                }
                else
                ng+=x;
            }
            
        }
        
        
        
        cout<<pg<<endl;
     
    }
    return 0;
}