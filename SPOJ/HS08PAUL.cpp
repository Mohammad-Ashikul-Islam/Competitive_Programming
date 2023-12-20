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
ll isPrime[mx],cntPrimes[mx];

void primeGen()
{
    isPrime[2] = 1;
    for(ll i=3; i<mx; i+=2) isPrime[i]=1;
    ll range=sqrt(mx);
    for(ll i=3; i<range; i+=2){
        if(isPrime[i]==1){
            for(ll j=i*i; j<mx; j+=i) isPrime[j]=0;
        }
    }
}

int main()
{
    optimize();
    primeGen();

    ll limX=3200,limY=60;
    for(ll i=1; i<limX; i++){
        for(ll j=1; j<limY; j++){
            ll val = (i*i)+(j*j*j*j);
            if(val<=mx && isPrime[val]==1) cntPrimes[val]=1;
        }
    }
    for(ll i=1; i<=mx; i++) cntPrimes[i]+=cntPrimes[i-1];

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << cntPrimes[n] << endl;
    }

    return 0;
}
