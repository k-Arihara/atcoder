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

ll max_score(ll N, ll M, vector<ll>* S, int id1, int id2){
  ll sum = 0;
  rep(i, 0, N) { sum += (S[i][id1] < S[i][id2]) ? S[i][id2] : S[i][id1]; }
  return sum;
}

void func(long long N, long long M, vector<long long>* S) {
  ll max = 0;
  rep(i, 0, M - 1) {
    rep(j, i + 1, M) { ll tmp = max_score(N, M, S, i, j);
    if(max < tmp)
      max = tmp;
    }
  }
  printf("%lld\n", max);
}

int main() {
  // cout << fixed << setprecision(5);

  long long N;
  std::scanf("%lld", &N);
  long long M;
  std::scanf("%lld", &M);
  std::vector<long long>* songs = new vector<long long>[N];
  rep(i, 0, N) {
    songs[i] = vector<long long>(M);
    rep(j, 0, M) { scanf("%lld", &songs[i][j]); }
   }
   func(N, M, move(songs));
   return 0;
}