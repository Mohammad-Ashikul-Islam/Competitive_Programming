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
ll cnt=0;

void dfs(vector<vector<ll>>& adj,bool visited[],ll source,ll v, ll e)
{
    visited[source] = true;
    stack<ll> st;
    st.push(source);
    while(!st.empty()){
        ll x = st.top();
        st.pop();
        for(ll i=0; i<adj[x].size(); i++){
            if(visited[ adj[x][i] ] == false){
                visited[ adj[x][i] ] = true;
                st.push(adj[x][i]);
            }
        }
    }
    return;
}

int main()
{
    optimize();

    ll v,e;
    cin >> v >> e;
    vector<vector<ll>> adj;
    for(ll i=0; i<v+1; i++) adj.push_back(vector<ll>());
    bool visited[v+1] = {false};
    for(ll i=0; i<e; i++){
        ll x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(ll i=1; i<=v; i++){
        if(visited[i]==false){
            cnt++;
            dfs(adj,visited,i,v,e);
        }
    }
    ll ans=1;
    for(ll i=1; i<=v-cnt; i++) ans *= 2;
    cout << ans << endl;
    return 0;
}
