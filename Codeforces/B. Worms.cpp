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
    vector<pair<ll,ll>> v;
    ll current=0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        v.push_back({current+1,current+x});
        current += x;
    }
    ll q;
    cin >> q;
    for(ll i=0; i<q; i++){
        ll x;
        cin >> x;
        ll low=0, high=v.size()-1,ans=-1;
        while(low<=high){
            ll mid=(low+high)/2;
            if(x>=v[mid].first && x<=v[mid].second){
                ans = mid;
                break;
            }
            if(x>v[mid].second) low=mid+1;
            if(x<v[mid].first) high = mid-1;
        }
        cout << ans+1 << endl;
    }
    return 0;
}
