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

void func(ll N, ll M, set<ll> S, vector<ll> T) {
  int result = 0;
  fore(t, T){
    if(S.find(t) != S.end())
      result++;
  }
  printf("%d\n", result);
}

int main() {
  // cout << fixed << setprecision(5);

  long long N;
  std::scanf("%lld", &N);
  set<ll> S;
  ll n;
  rep(i, 0, N) {
    scanf("%lld", &n);
    S.insert(n);
  }
  ll Q;
  std::scanf("%lld", &Q);
  vector<ll> T(Q);
  rep(i, 0, Q) { scanf("%lld", &T[i]); }
  func(N, Q, move(S), move(T));
  return 0;
}
