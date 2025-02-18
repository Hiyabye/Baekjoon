#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n, const vector<int> &f, int x) {
  for (int i=0; i<n; i++) {
    if (x % f[i] && f[i] % x) return false;
  }
  return true;
}

void solve(int idx) {
  int n, l, h; cin >> n >> l >> h;
  vector<int> f(n);
  for (int i=0; i<n; i++) cin >> f[i];

  cout << "Case #" << idx << ": ";
  for (int i=l; i<=h; i++) {
    if (check(n, f, i)) {
      cout << i << "\n";
      return;
    }
  }
  cout << "NO\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}