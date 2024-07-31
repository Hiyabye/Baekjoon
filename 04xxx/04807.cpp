#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &a) {
  for (int i=1; i<n; i++) {
    if (a[i] != a[i-1]) return false;
  }
  return true;
}

inline vector<int> calc(int n, const vector<int> &a) {
  vector<int> b(n);
  for (int i=0; i<n-1; i++) {
    b[i] = abs(a[i+1] - a[i]);
  }
  b[n-1] = abs(a[0] - a[n-1]);
  return b;
}

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  while (!check(n, a) && ans < 1000) {
    a = calc(n, a);
    ans++;
  }

  cout << "Case " << idx << ": ";
  if (ans == 1000) cout << "not attained\n";
  else cout << ans << " iterations\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}