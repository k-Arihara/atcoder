#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007（素数）で割った余り
const long long mod = 1e9 + 7;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto& i : a)

void func(long long N, long long M, vector<long long> A, vector<long long> B) {
  rep(m, 0, M) {
    bool result = false;
    long long target = B[m];
    for (int bit = 0; bit < (1 << N); ++bit) {
      long long sum = 0;
      for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {
          sum += A[i];
        }
      }
      if (sum == target) {
        result = true;
        break;
      }
    }
    if (result)
      printf("yes\n");
    else
      printf("no\n");
  }
}

int main() {
  // cout << fixed << setprecision(5);

  long long N;
  std::scanf("%lld", &N);
  vector<long long> A(N);
  rep(i, 0, N) { scanf("%lld", &A[i]); }
  long long M;
  std::scanf("%lld", &M);
  vector<long long> B(M);
  rep(i, 0, M) { scanf("%lld", &B[i]); }
  func(N, M, move(A), move(B));
  return 0;
}