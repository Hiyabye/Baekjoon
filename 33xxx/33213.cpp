#include <iostream>
#include <set>
using namespace std;

int solve(void) {
  int n; cin >> n;
  set<int> a, b;
  while (n--) {
    int x; cin >> x;
    if (x & 1) a.insert(x);
    else b.insert(x);
  }

  if (a.size() > b.size()) {
    for (int i=1; ; i+=2) {
      if (a.find(i) != a.end()) continue;
      return i;
    }
  } else {
    for (int i=2; ; i+=2) {
      if (b.find(i) != b.end()) continue;
      return i;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}