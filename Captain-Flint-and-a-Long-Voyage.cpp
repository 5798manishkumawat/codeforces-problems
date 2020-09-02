
Problem Link - https://codeforces.com/contest/1388/problem/B


Solution-------



#include<bits/stdc++.h>
#define ll long long int
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      
            ll d=n/4;
            ll r=n%4;
            
            if(r==0)
            {
                for( ll i=1;i<=n-d;i++)
                  cout<<"9";
                  
                  for(ll i=1;i<=d;i++)
                  cout<<"8";
                  cout<<endl;
            }
            else
            {
                d++;
                    for( ll i=1;i<=n-d;i++)
                  cout<<"9";
                  
                  for(ll i=1;i<=d;i++)
                  cout<<"8";
                  cout<<endl;
            }
    }
return 0;
}