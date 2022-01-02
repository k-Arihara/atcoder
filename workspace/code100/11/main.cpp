#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007（素数）で割った余り
const long long mod = 1e9 + 7;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto& i : a)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) {
  return b ? gcd(b, a % b) : a;
}
ull lcm(ull a, ull b) {
  return a / gcd(a, b) * b;
}

const long long MOD = 2;

void func(ll N, ll M, vector<vector<ll>> L, vector<int> C) {
  int result = 0;
  for (int bit = 0; bit < (1 << N); ++bit) {
    vector<int> sw(N, 0);
    rep(n, 0, N) {
      if (bit & (1 << n))
        sw[n] = 1;
    }

    vector<int> light(M, 0);
    rep(m, 0, M) { fore(s, L[m]) light[m] += sw[s - 1]; }
    bool ok = true;
    rep(m, 0, M) {
      if (C[m] != (light[m] % 2)) {
        ok = false;
        break;
      }
    }
    if (ok == true)
      result++;
  }
  printf("%d\n", result);
}

int main() {
  // cout << fixed << setprecision(5);

  long long N, M;
  std::scanf("%lld %lld", &N, &M);
  vector<vector<ll>> L(M);
  vector<int> cond(M);
  rep(i, 0, M) {
    ll k = 0;
    scanf("%lld", &k);
    vector<ll> L_set(k);
    rep(j, 0, k) { scanf("%lld", &L_set[j]); }
    L[i] = L_set;
  }
  rep(i, 0, M) { scanf("%d", &cond[i]); }
  func(N, M, move(L), move(cond));
  return 0;
}
