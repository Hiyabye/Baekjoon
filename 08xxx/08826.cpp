#include <cmath>
#include <iostream>
#include <string>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  pair<int, int> ans = make_pair(0, 0);
  for (char c : s) {
    ans.first += (c == 'N') - (c == 'S');
    ans.second += (c == 'E') - (c == 'W');
  }
  cout << (abs(ans.first) + abs(ans.second)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}