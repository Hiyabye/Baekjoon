#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n, r; cin >> n >> r;
  unordered_set<int> s;
  while (r--) {
    int x; cin >> x;
    s.insert(x);
  }

  if (s.size() == n) cout << "*";
  for (int i=1; i<=n; i++) {
    if (s.find(i) == s.end()) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}