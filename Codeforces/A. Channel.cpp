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

    ll t;
    cin >> t;
    while(t--){
        ll n,is,q;
        cin >> n >> is >> q;
        string s;
        cin >> s;
        ll l =s.size(),sum=is;
        bool yes = false;
        for(ll i=0; i<l; i++){
            if(sum>=n) yes = true;
            if(s[i]=='+') sum++;
            else sum--;
            if(sum>=n) yes = true;
        }
        if(yes==true){
            cout << "YES\n";
            continue;
        }
        bool maybe=false;
        sum = is;
        for(ll i=0; i<s.size(); i++){
            ll tempis=is;
            if(s[i]=='+') is++;
            else is--;
            ll cnt=0;
            for(ll j=i+1; j<s.size(); j++){
                if(s[j]=='+') cnt++;
            }
            if(tempis+cnt >=n || is+cnt >=n) maybe=true;
        }
        if(maybe) cout << "MAYBE\n";
        else cout << "NO\n";
    }

    return 0;
}
