#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

const ll mx = 2e5+123;
ll ara[mx],dp[mx],n;

ll fnc(ll i)
{
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];
    ll x = LLONG_MAX, y = LLONG_MAX;
    if(i+1 <=n) x = abs(ara[i]-ara[i+1])+fnc(i+1);
    if(i+2 <=n ) y = abs(ara[i]-ara[i+2])+fnc(i+2);
    dp[i] = min(x,y);
    return dp[i];
}

int main()
{
    optimize();

    cin >> n;
    for(ll i=1; i<=n; i++){
        cin >> ara[i];
        dp[i] = -1;
    }
    cout << fnc(1) << endl;
    return 0;
}
