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

const ll mx=2e4+123;
vector<ll> adj[mx];
bitset<mx> visited,exists;
ll cnt,cnt1; //cnt means number of connected nodes in a component and cnt1 means colored 1 node ( or vampire) in that component

void dfs(ll source, ll color)
{
    visited[source] = true;
    cnt++;
    ll next_color;
    if(color==1) { cnt1++; next_color=2; }
    else next_color = 1;
    for(ll i=0; i<adj[source].size(); i++){
        if(!visited[adj[source][i] ]){
            dfs( adj[source][i], next_color );
        }
    }
}

int main()
{
    optimize();

    ll t;
    cin >> t;
    for(ll tc=1; tc<=t; tc++){
        for(ll i=0; i<mx; i++){
            adj[i].clear();
            exists[i] = visited[i] = false;
        }
        ll e;
        cin >> e;
        for(ll i=0; i<e; i++){
            ll u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            exists[u]=exists[v]=true;
        }
        ll ans=0;
        for(ll i=0; i<mx; i++){
            cnt = cnt1 = 0;
            if(exists[i]==true && visited[i]==false){
                dfs(i,1);
                ans += max(cnt1,cnt-cnt1);
            }
        }
        cout << "Case " << tc << ": " << ans << endl;
    }

    return 0;
}
