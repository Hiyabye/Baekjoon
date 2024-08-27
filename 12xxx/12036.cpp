#include <iostream>
using namespace std;

inline int addmod(int a, int b, int m) {
  return (a % m + b % m) % m;
}

inline int submod(int a, int b, int m) {
  return (a % m + m - b % m) % m;
}

inline int calc(int d, int k, int n, int cur) {
  int ret = k & 1 ? addmod(cur, n, d) : submod(cur, n, d);
  return ret == 0 ? d : ret;
}

void solve(int x) {
  int d, k, n; cin >> d >> k >> n;

  int cur = calc(d, k, n, k);
  int y = calc(d, k, n, cur+1);
  int z = calc(d, k, n, cur-1);

  cout << "Case #" << x << ": " << y << " " << z << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}