#include <bits/stdc++.h>
using namespace std;

void func(long long N, long long M) {
  for (int m = 0; m < M; ++m) {
    // 2^N iteration
    for (int bit = 0; bit < (1 << N); ++bit) {
      for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {
          // TODO
        }
      }
    }
  }
}