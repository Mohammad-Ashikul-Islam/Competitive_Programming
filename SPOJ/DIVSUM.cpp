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

const ll mx = 1e5+123;
ll isNotPrime[mx];
vector<ll> primes;

void seive(){
    primes.push_back(2);
    ll range = sqrt(mx);
    for(ll i=3; i<range; i+=2){
        if(isNotPrime[i]==1) continue;
        for(ll j=i*i; j<mx; j+=i){
            isNotPrime[j]=1;
        }
    }
    for(ll i=3; i<mx; i+=2){
        if(isNotPrime[i]==0) primes.push_back(i);
    }
}

ll sod(ll n)
{
    ll ans=1;
    for(ll i=0; i<primes.size(); i++){
        if(primes[i]*primes[i] > n) break;
        if(n%primes[i]==0){
            ll sum=1,current_value=1;
            while(n%primes[i]==0){
                current_value = current_value*primes[i];
                sum = sum + current_value;
                n = n/ primes[i];
            }
            ans = ans * sum;
        }
    }
    if(n>1){
        ll sum = 1, current_value=1;
        current_value = current_value*n;
        sum = current_value+sum;
        ans = ans * sum;
    }
    return ans;
}

int main()
{
    optimize();
    seive();

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << sod(n)-n << endl;
    }

    return 0;
}
