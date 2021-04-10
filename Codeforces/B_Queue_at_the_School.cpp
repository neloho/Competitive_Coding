#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
#define int ll
#define pb push_back
#define mp make_pair
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define remax(a,b) a = max(a,b)
#define remin(a,b) a = min(a,b)
#define all(v) v.begin(),v.end()
typedef map<int,int> mii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define F first
#define S second
#define PQ(type) priority_queue<type>
#define PQD(type) priority_queue<type,vector<type>,greater<type> >
#define WL(t) while(t--)
#define SZ(x) ((int)(x).size())
#define inrange(i,a,b) ((i>=min(a,b)) && (i<=max(a,b))
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solvethetestcase()
{
    int n, t;
    cin >> n >> t;
    vector<char> arr(n);
    FOR(i, 0, n) cin >> arr[i];
    int i = 0;
    WL(t)
    {
        while(i < n - 1) if(arr[i] == 'B' && arr[i + 1] == 'G') { swap(arr[i], arr[i + 1]); i += 2; } else ++i;
        i = 0;
    }
    for(char e : arr) cout << e;
}
signed main()
{
    FAST_IO
    int t = 1;
    //cin >> t;
    FOR(testcase,1,t+1)
    {
        solvethetestcase();
    }
}