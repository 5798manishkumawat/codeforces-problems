
Problem Link - https://codeforces.com/contest/1400/problem/A

Solution----------


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
    ll t=1;
    cin>>t;
    while(t--)
    {   
        ll n;
        cin>>n;
        
        string str;
        string res="";
        cin>>str;
        
            for(ll i=0;i<2*n-1;i+=2)
            res+=str[i];
            
        
        cout<<res<<"\n";
 
        
    }
return 0;
} 