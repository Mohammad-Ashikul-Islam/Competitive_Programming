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
        string s,p;
        cin >> s;
        for(ll i=s.size()-1; i>=0 && p.size()<3; i--){
            p.push_back(s[i]);
            s.pop_back();
        }
        reverse(p.begin(),p.end());
        ll num = stoll(p,nullptr,10);
        ll num_stored=num;
        num = (num/10)*10;
        num+=9;
        while(num%8 != 0){
            num--;
        }
        string q = to_string(num);
        if(num_stored%8==0) s+=p;
        else if(p.size()==q.size()) s+=q;
        else{
            if(p.size()-q.size()==1){
                s.push_back(p[0]);
                s.push_back(q[0]);
                s.push_back(q[1]);
            }
            else{
                s.push_back(p[0]);
                s.push_back(p[1]);
                s.push_back(q[0]);
            }
        }
        cout << s << endl;
    }

    return 0;
}
