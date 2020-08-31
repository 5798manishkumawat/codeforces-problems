
Problem Link - https://codeforces.com/contest/1397/problem/A

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
        ll sum=0;
        map<char,ll>mp;
        string str;
        fo(i,n)
        {
            cin>>str;
            ll d=str.length();
            sum+=d;
            fo(j,d)
            mp[str[j]]++;
        }
        
        if(sum%n!=0)
        cout<<"NO"<<"\n";
        else
        {
            ll f=1;
            for(char i='a';i<='z';i++)
            if(mp[i]%n!=0)
            {f=0;break;}
            
            
            if(f)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }        
    }

return 0;
} 