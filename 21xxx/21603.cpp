#include <iostream>
#include <vector>
using namespace std;

inline int mod10(int x) {
  return x % 10;
}

void solve(void) {
  int n, k; cin >> n >> k;

  vector<int> ans;
  for (int i=1; i<=n; i++) {
    if (mod10(i) != mod10(k) && mod10(i) != mod10(2*k)) ans.push_back(i);
  }

  cout << ans.size() << "\n";
  for (int x : ans) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}