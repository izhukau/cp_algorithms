#include <bits/stdc++.h>
#include <ranges>

/*defines & using*/
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using ull = unsigned long long;

using namespace std;

/* constanst */
const int N = 1e6 + 5;
const int inf = 2e9;
const long long INF = 4e18;

/* templates */
template < typename T >
bool umn(T& a, T b) { return a > b ? a = b, 1 : 0; }

template < typename T >
bool umx(T& a, T b) { return a < b ? a = b, 1 : 0; }

/* main */
void solve (int test) {
    
}

int main() {
#ifdef __APPLE__
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;

    for (int i = 1; i <= Test; ++ i) {
        solve(i);
    }
    return 0;
}

