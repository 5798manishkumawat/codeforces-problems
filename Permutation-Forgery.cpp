
Problem Link -https://codeforces.com/contest/1405/problem/A



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
    
        ll a[n];
        
        fo(i,n)
        cin>>a[i];
        
        for(ll i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
        
        cout<<endl;
     
    }
    return 0;
}