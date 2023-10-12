//unsolved
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

bool isPalindrome(vector<ll>& v)
{
    if(count(v.begin(),v.end(),v[0])== v.size()) return false;
    stack<ll> st;
    for(ll i=0; i<v.size(); i++){
        if(st.empty()) st.push(v[i]);
        else{
            if(st.top()==v[i]) st.pop();
            else st.push(v[i]);
        }
    }
    if(st.size()==0 || st.size()==1) return true;
    else return false;
}

int main()
{
    optimize();

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        set<ll> s,p;
        ll turn = 1;
        for(ll i=0; i<v.size(); i++){
            if(turn==1){
                ll sz = s.size();
                s.insert(v[i]);
                if(s.size()!=sz) turn = 2;
            }
            else{
                ll sz = p.size();
                p.insert(v[i]);
                if(p.size() != sz) turn = 1;
            }
        }
        bool palindrome = isPalindrome(v);
        if(palindrome && (v.size())%2==1 ) cout << min(s.size(),p.size())+1 << endl;
        else cout << min(s.size(),p.size()) << endl;
    }

    return 0;
}
