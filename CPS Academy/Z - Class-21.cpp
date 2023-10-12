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
    vector<ll> v1,v2,v3,v4;
    v1.push_back(0);
    v2.push_back(0);
    v3.push_back(0);
    v4.push_back(0);
    for(ll i =0; i<n; i++){
        ll num;
        char ch;
        cin >> ch >> num;
        if(ch=='S') v1.push_back(num);
        if(ch=='H') v2.push_back(num);
        if(ch=='C') v3.push_back(num);
        if(ch=='D') v4.push_back(num);
    }
    dbg("--Ans starts here--");
    for(ll i=1; i<=13; i++) if(count(v1.begin(),v1.end(),i)==0) cout << "S " << i << endl;
    for(ll i=1; i<=13; i++) if(count(v2.begin(),v2.end(),i)==0) cout << "H " << i << endl;
    for(ll i=1; i<=13; i++) if(count(v3.begin(),v3.end(),i)==0) cout << "C " << i << endl;
    for(ll i=1; i<=13; i++) if(count(v4.begin(),v4.end(),i)==0) cout << "D " << i << endl;

    return 0;
}
