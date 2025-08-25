#include<bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Typedefs
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

// Constants
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;

// Macros
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

// Debug (optional for local testing)
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(long x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(unsigned x) { cerr << x; }
void _print(unsigned long x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(long double x) { cerr << x; }
void _print(char x) { cerr << '\'' << x << '\''; }
void _print(const char *x) { cerr << '\"' << x << '\"'; }
void _print(const string &x) { cerr << '\"' << x << '\"'; }
template <typename T, typename V> void _print(const pair<T, V> &x) { cerr << "{"; _print(x.ff); cerr << ","; _print(x.ss); cerr << "}"; }
template <typename T> void _print(const vector<T> &x) { cerr << "["; for (auto &i : x) {_print(i); cerr << ",";} cerr << "]"; }
template <typename T> void _print(const set<T> &x) { cerr << "["; for (auto &i : x) {_print(i); cerr << ",";} cerr << "]"; }
template <typename T, typename V> void _print(const map<T, V> &x) { cerr << "["; for (auto &i : x) {_print(i); cerr << ",";} cerr << "]"; }

// Sieve of Eratosthenes (optional)
vector<bool> sieve(int n) {
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i*i <= n; ++i)
        if (is_prime[i])
            for (int j = i*i; j <= n; j += i)
                is_prime[j] = false;
    return is_prime;
}

// Main
void solve() {


}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
