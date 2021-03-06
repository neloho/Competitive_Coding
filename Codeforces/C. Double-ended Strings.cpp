//Problem: https://codeforces.com/problemset/problem/1506/C
//Solution: https://codeforces.com/problemset/submission/1506/114277484
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using namespace std;
typedef long double LD;
typedef long long LL;
#define PB push_back
#define MP make_pair
#define FR(i, a, b, s) for (auto i=(a); (s)>0?i<=(b):i>=(b); i+=(s))
#define CAMAX(a,b) a = max(a,b)
#define CAMIN(a,b) a = min(a,b)
#define ALL(v) v.begin(),v.end()
typedef map<int,int> MII;
typedef unordered_map<int,int> UMII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
#define F first
#define S second
#define SB(x) __builtin_popcountll(x)
#define ZB(x) __builtin_ctzll(x)
#define MOD 1000000007
#define INF 1e18
#define PQ(type) priority_queue<type>
#define PQD(type) priority_queue<type,vector<type>,greater<type> >
#define WL(t) while(t--)
#define SZ(x) ((int)(x).size())
#define INRNG(i,a,b) ((i>=min(a,b)) && (i<=max(a,b)))
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
const int FMOD = 998244353;
const double eps = 1e-9;
void solve(){
  string a, b;
  cin>>a>>b;
  int al=SZ(a), bl=SZ(b);
  int dp[al+1][bl+1]={0}, zulphikar=0;
  for(int i=0; i<=al; ++i){
    for(int j=0; j<=bl; ++j){
      if(i==0 || j==0) dp[i][j]=0;
      else{
        if(a[i-1] == b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=0;
        CAMAX(zulphikar, dp[i][j]);
      }
    }
  }
  cout<<((al+bl-(2*zulphikar)))<<"\n";
}
signed main(){
    FAST_IO
    int ntc = 1;
    cin >> ntc;
    FR(tc, 1, ntc, 1){
        solve();
    }
    return 0;
}
