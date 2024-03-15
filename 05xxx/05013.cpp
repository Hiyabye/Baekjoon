#include <iostream>
#include <string>
using namespace std;

bool check(string s) {
  for (int i=1; i<s.length(); i++) {
    if (s[i-1] == 'C' && s[i] == 'D') return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; cin >> s;
    if (check(s)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}