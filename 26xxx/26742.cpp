#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  cout << count(s.begin(), s.end(), 'B') / 2 + count(s.begin(), s.end(), 'C') / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}