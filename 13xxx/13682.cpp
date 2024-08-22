#include <iostream>
#include <vector>
using namespace std;

inline bool check(int a, int b, int c) {
  return (a < b && b > c) || (a > b && b < c);
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (check(h[(i+n-1) % n], h[i], h[(i+1) % n])) ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}