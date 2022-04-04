#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// 総数を1000000007（素数）で割った余り
const long long mod = 1e9 + 7;

using ll = long long;
using pii  = pair<int, int>;
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

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

double subfunc(ll N, int visited[], vector<ll> x, vector<ll> y){
  double distance = 0;
  rep(i, 1, N) {
    int src = visited[i - 1] - 1;
    int dst = visited[i] - 1;
    double d =
        sqrt(pow(x[src] - x[dst], 2) + pow(y[src] - y[dst], 2));
    // printf("%f\n", d);
    distance += d;
  }
  return distance;
}

void func(long long N, std::vector<long long> x, std::vector<long long> y){
  int visited[N];
  int count = 0;
  double sum = 0;

  rep(i, 0, N) visited[i] = i + 1;
  do {
    count++;
    sum += subfunc(N, visited, x, y);
  } while (next_permutation(visited, visited + N));
  printf("%f\n", sum / count);
}

int main(){
  // cout << fixed << setprecision(5);

  long long N;
  std::scanf("%lld", &N);
  std::vector<long long> x(N);
  std::vector<long long> y(N);
  for(int i = 0 ; i < N ; i++){
    std::scanf("%lld", &x[i]);
    std::scanf("%lld", &y[i]);
  }
  func(N, std::move(x), std::move(y));
  return 0;
}
