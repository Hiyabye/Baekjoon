#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<bool> v(10000, false);
  while (n--) {
    int x, y; cin >> x >> y;
    for (int i=x; i<y; i++) v[i] = true;
  }
  cout << count(v.begin(), v.end(), true);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}