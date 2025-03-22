#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<int> ans;
  while (n--) {
    int m, o; cin >> m >> o;
    if (!o) ans.insert(m);
  }
  cout << (ans.empty() ? -1 : *ans.begin());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}