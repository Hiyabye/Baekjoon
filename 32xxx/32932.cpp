#include <iostream>
#include <set>
#include <string>
#include <utility>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  set<pair<int, int>> st;
  while (n--) {
    int x, y; cin >> x >> y;
    st.insert({x, y});
  }
  string s; cin >> s;

  int x = 0, y = 0;
  for (char c : s) {
    int nx = x + (c == 'R') - (c == 'L');
    int ny = y + (c == 'U') - (c == 'D');
    if (st.find({nx, ny}) != st.end()) continue;
    x = nx; y = ny;
  }
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}