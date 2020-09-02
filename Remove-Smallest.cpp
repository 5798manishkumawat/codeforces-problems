
Problem Link - https://codeforces.com/contest/1399/problem/A


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
         
         fo(i,n)
         cin>>a[i];
         
         sort(a,a+n);
         ll x=0;
         for(ll i=1;i<n;i++)
         {
             if(abs(a[i]-a[i-1])>1)
             {
                 x=1;
                 break;
             }
         }
         
         if(x==0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
     
return 0;
}