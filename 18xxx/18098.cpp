#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<int> s;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    s.insert(a);
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (s.find(i) != s.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}