#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  sort(s.begin(), s.end(), greater<char>());

  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}