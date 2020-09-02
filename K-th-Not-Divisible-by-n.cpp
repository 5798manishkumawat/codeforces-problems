
Problem Link - https://codeforces.com/contest/1352/problem/C


Solution-------



#include<bits/stdc++.h>
#define ll long long int
#define input freopen("input.txt","r",stdin)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define deb(x) cout<<"<<<<>>>>"<<x;
#define endl "\n"
ll p = 1000000007;
using namespace std;

int main()
{
   // input;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll curr=k,i=k/n;
        while(i!=0)
        {
            ll j=0;
            j = (curr+i)/n - (curr/n);
            curr+=i;
            i=j;
        }
        cout<<curr<<endl;
    }
	return 0;
}
