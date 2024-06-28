#include <iostream>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;

  pair<int, int> ans = make_pair(0, 0);
  while (n--) {
    char t; int w, h, l; cin >> t >> w >> h >> l;
    if (t == 'A') {
      ans.first += 1000+(w/12)*(h/12)*(l/12)*500;
      ans.second += (w/12)*(h/12)*(l/12)*4000;
    } else ans.first += 6000;
  }
  cout << ans.first << "\n" << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}