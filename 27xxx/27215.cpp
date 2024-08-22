#include <iostream>
#include <vector>
using namespace std;

inline int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

inline bool check(int n) {
  for (int i=2; i*i<=n; i++) {
    if (!(n % i)) return false;
  }
  return true;
}

void solve(void) {
  int x; cin >> x;
  int l; cin >> l;
  int r; cin >> r;

  vector<int> ans;
  for (int i=l; i<=r; i++) {
    if (x == i) continue;
    if (check(gcd(x, i))) ans.push_back(i);
  }

  cout << ans.size() << "\n";
  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}