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

void func(long long n, long long x) {
  ll ans = 0;
  rep(a, 1, n - 1) {
    rep(b, a + 1, n){
      rep(c, b + 1, n + 1){
        if(a + b + c == x)
          ans++;
      }
    }
  }
  printf("%lld\n", ans);
}

int main() {
  // cout << fixed << setprecision(5);

  long long A, B;
  while (true) {
    std::scanf("%lld", &A);
    std::scanf("%lld", &B);
    if (A == 0 && B == 0)
      break;
    else
      func(A, B);
  }
  return 0;
}