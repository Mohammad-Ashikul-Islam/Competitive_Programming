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

const ll mx = 1e7+123;
ll numbers[mx],modified_numbers[mx];

void seive()
{
    ll n = sqrt(mx);
    for(ll i=2; i<n; i++){
        if(numbers[i]==1) continue;
        for(ll j=i*i; j<mx; j+=i) numbers[j]=1;
    }
}

void processPrimes()
{
    for(ll i=1; i<mx; i++){
        ll xx=i*i;
        if(xx > mx) break;
        for(ll j=1; j<mx; j++){
            ll y = j;
            ll yyyy = y*y;
            if(yyyy > mx) break;
            yyyy *= y;
            if(yyyy >mx) break;
            yyyy *= y;
            if(yyyy > mx) break;
            if(xx+yyyy>mx) break;
            if(numbers[xx+yyyy]==0) modified_numbers[xx+yyyy]=1;
        }
    }
    for(ll i=1; i<mx; i++) modified_numbers[i]+=modified_numbers[i-1];
}

int main()
{
    optimize();
    seive();
    processPrimes();

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << modified_numbers[n] << endl;
    }

    return 0;
}
