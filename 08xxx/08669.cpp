#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<int> s;
  while (n--) {
    int g, r; cin >> g >> r;
    s.insert(r);
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}