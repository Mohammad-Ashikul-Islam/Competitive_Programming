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


int main()
{
    optimize();

    ll n;
    cin >> n;
    vector<ll> prices(n),color1(n),color2(n);
    for(ll i=0; i<n; i++) cin >> prices[i];
    for(ll i=0; i<n; i++) cin >> color1[i];
    for(ll i=0; i<n; i++) cin >> color2[i];
    priority_queue<ll, vector<ll>, greater<ll>> v[4][4];
    for(ll i=0; i<n; i++) v[color1[i]][color2[i]].push(prices[i]);
    ll q;
    cin >> q;
    for(ll i=0; i<q; i++){
        ll color;
        cin >> color;
        ll ans=INT_MAX,frontcolor,backcolor;
        for(ll j=1; j<=3; j++){
            if(!v[j][color].empty() && v[j][color].top()<ans){
                ans = v[j][color].top();
                frontcolor = j;
                backcolor = color;
            }
        }
       for(ll j=1; j<=3; j++){
        if(!v[color][j].empty() && v[color][j].top()<ans){
            ans = v[color][j].top();
            frontcolor = color;
            backcolor = j;
        }
       }
       if(ans == INT_MAX){
        cout << -1 << " ";
       }
       else{
        cout << ans << " ";
        v[frontcolor][backcolor].pop();
       }
    }
    cout << endl;
    return 0;
}
