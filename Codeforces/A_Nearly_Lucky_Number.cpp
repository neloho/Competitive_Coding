#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
#define int long long
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

void isLucky(int& n)
{
    char a = 96;
    while(n > 0)
    {
        if(n % 10 == 4 || n % 10 == 7) ++a;
        n /= 10;
    }
    if(a == 'd' || a == 'g') cout << "YES";
    else cout << "NO";
}
void solvethetestcase()
{
    int n;
    cin >> n;
    isLucky(n);
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