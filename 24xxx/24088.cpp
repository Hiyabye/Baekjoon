#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;
  string s; cin >> s;

  cout << (count(s.begin(), s.end(), 'R') < k ? 'R' : 'W');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}