#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int p; cin >> p;

  set<int> s;
  for (int i=1; i<n; i++) {
    int x; cin >> x;
    s.insert(x);
  }

  for (int i=p; i<p+n; i++) {
    if (s.find(i) == s.end()) {
      cout << i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}