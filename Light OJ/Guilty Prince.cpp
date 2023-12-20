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
const ll mx=22;
char adj[mx][mx];
ll row,column;
bool visited[mx][mx];
ll cnt=0;
ll dx[4] = { 1, -1, 0, 0 };
ll dy[4] = { 0, 0, 1, -1 };

void dfs(ll x, ll y){
    visited[x][y] = 1;
    cnt++;
    for(ll i=0; i<4; i++){
        ll next_x = x+dx[i], next_y = y+dy[i];
        if(next_x>=1 && next_x<=row && next_y>=1 && next_y<=column && visited[next_x][next_y]==false && adj[next_x][next_y]!='#')
            dfs(next_x,next_y);
    }
}

int main()
{
    optimize();

    ll t;
    cin >> t;
    for(ll tc=1; tc<=t; tc++){
       ll x,y;
       cin >> column >> row;
       for(ll i=1; i<=row; i++){
        for(ll j=1; j<=column; j++){
            cin >> adj[i][j];
            if(adj[i][j]=='@'){
                x=i;
                y=j;
            }
        }
       }
       for(ll i=1; i<=row; i++){
        for(ll j=1; j<=column; j++)
            visited[i][j]=false;
       }

        cnt=0;
        dfs(x,y);
        cout << "Case " << tc << ": " << cnt << endl;
    }

    return 0;
}
