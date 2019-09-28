#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n,z) for(int i=z;i<n;i++)
#define rrep(i,z) for(int i=z;i>=0;i--)
#define lli long long int
#define nl cout<<endl
#define vi vector<int>
#define vlli vector<long long int>
#define umap unordered_map
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define ipair pair <int,int>
#define llipair pair <lli,lli>
#define pq priority_queue
#define displaymatrix(a,m,n) for(int i=0;i<m;i++){for(int j=0;j<n;j++)cout<<a[i][j]<<" ";cout<<endl;}
#define printarray(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}nl;
#define vinput(a,n) vi a(n);rep(i,n,0)cin>>a[i]
#define ainput(a,n) rep(i,n,0)cin>>a[i]
#define SO(a) sort(a.begin(),a.end())
#define SOP(a,comp) sort(a.begin(),a.end(),comp)
#define inf INT_MAX

lli llmax(lli a,lli b){if(a>b)return a; return b;}
lli llmin(lli a,lli b){if(a<b)return a; return b;}

int main()
{
    lli hash=91981;
    lli hash2=73837265;
    fastio;
    string s;
    getline(cin, s);
    int l=s.length();
    rep(i,l,0)
    {
        cout<<(((lli)s[i])^hash)<<" ";
    }
    cout<<"-1";
    nl;
    rep(i,l,0)
    {
        cout<<(((lli)s[i])^hash2)<<" ";
    }
    cout<<"-1";
    nl;
}


//91904 91938 91941 91940 91961 92013 91937 91938 91963 91944 91966 92013 91961 91948 91939 91956 91948 73837212 73837246 73837241 73837240 73837221 73837297 73837245 73837246 73837223 73837236 73837218 73837297 73837221 73837232 73837247 73837224 73837232 -1

73837244 73837246 73837241 73837240 73837221 73837297 73837245 73837246 73837223 73837236 73837218 73837297 73837221 73837232 73837247 73837224 73837232 -1