#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string s; cin >> s;

  reverse(s.begin(), s.end());
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}