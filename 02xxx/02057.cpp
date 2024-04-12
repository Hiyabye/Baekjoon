#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  long long n; cin >> n;
  if (n == 0) return false;

  vector<long long> f(20, 1);
  for (int i=2; i<20; i++) f[i] = f[i-1] * i;

  for (int mask=0; mask<(1<<20); mask++) {
    long long sum = 0;
    for (int i=0; i<20; i++) {
      if (mask & (1<<i)) sum += f[i];
    }
    if (sum == n) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}