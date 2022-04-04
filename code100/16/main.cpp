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


void func(long long N, std::vector<long long> P, std::vector<long long> Q){
  int array[N];
  int p = -1, q = -1;
  int num = 0;
  rep(i, 0, N) array[i] = i + 1;
  do{
    num++;
    if (p == -1) {
      int count = 0;
      rep(i, 0, N){
        if(array[i] != P[i]) break;
        else
          count++;
      }
      if(count == N)
        p = num;
    }

    if (q == -1) {
      int count = 0;
      rep(i, 0, N){
        if(array[i] != Q[i]) break;
        else
          count++;
      }
      if(count == N)
        q = num;
    }
  }while (next_permutation(array, array + N));
  printf("%d\n", abs(p - q));
}

int main(){
  // cout << fixed << setprecision(5);

  long long N;
  std::scanf("%lld", &N);
  std::vector<long long> P(N);
  for(int i = 0 ; i < N ; i++){
    std::scanf("%lld", &P[i]);
  }
  std::vector<long long> Q(N);
  for(int i = 0 ; i < N ; i++){
    std::scanf("%lld", &Q[i]);
  }
  func(N, std::move(P), std::move(Q));
  return 0;
}
