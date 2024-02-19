#include <iostream>
#include <vector>
#define MOD 998244353
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  // 0. Preprocessing
  vector<vector<bool>> b(n, vector<bool>(30));
  for (int i=0; i<n; i++) {
    for (int j=0; j<30; j++) {
      b[i][j] = (a[i] >> j) & 1;
    }
  }

  // 1. AND
  long long sum = 0;
  for (int mask=0; mask<30; mask++) {
    long long cnt = 0, pre = 0;
    for (int i=0; i<n; i++) {
      pre = (b[i][mask] ? pre + 1 : 0);
      cnt = (cnt + pre) % MOD;
    }
    sum = (sum + ((1LL << mask) * cnt) % MOD) % MOD;
  }
  cout << sum << " ";

  // 2. OR
  sum = 0;
  for (int mask=0; mask<30; mask++) {
    long long cnt = 0, pre = 1;
    for (int i=0; i<n; i++) {
      if (b[i][mask]) {
        cnt = (cnt + pre * (n-i)) % MOD;
        pre = 1;
      } else {
        pre++;
      }
    }
    sum = (sum + ((1LL << mask) * cnt) % MOD) % MOD;
  }
  cout << sum << " ";

  // 3. XOR
  sum = 0;
  for (int mask=0; mask<30; mask++) {
    long long cnt = 0, even = 1, odd = 0;
    for (int i=0; i<n; i++) {
      if (b[i][mask]) odd++;
      else even++;
      if (b[i][mask]) swap(even, odd);
      cnt += odd;
    }
    sum = (sum + ((1LL << mask) * cnt) % MOD) % MOD;
  }
  cout << sum;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}