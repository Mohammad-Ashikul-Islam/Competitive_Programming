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
        ll n;
        cin >> n;
        ll ara[n+1] = {0};
        priority_queue<pair<ll,ll> > p;
        p.push({n,-1});
        ll cnt = 1;
        while(!p.empty()){
            ll left = p.top().second * -1;
            ll len = p.top().first;
            ll right = left+len-1;
            ll mid;
            if(len%2==1) mid = (left+right)/2;
            else mid = (left+right-1)/2;
            ara[mid]=cnt;
            cnt++;
            p.pop();
            ll left1 = left;
            ll right1 = mid-1;
            ll left2 = mid+1;
            ll right2 = right;
            if(left1<=right1){
                ll sz = right1-left1+1;
                p.push({sz,left1*-1});
            }
            if(left2<=right2){
                ll sz = right2-left2+1;
                p.push({sz, left2*-1});
            }
        }
        for(ll i=1; i<=n; i++) cout << ara[i] << " ";
        cout << endl;
    }

    return 0;
}
