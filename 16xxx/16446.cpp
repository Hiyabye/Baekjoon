#include <iostream>
#include <string>
using namespace std;

bool check(const string &s, const string &t) {
  for (int i=0; i<s.length(); i++) {
    if (s[i] == t[i]) return false;
  }
  return true;
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int ans = 0;
  for (int i=0; i<a.length()-b.length()+1; i++) {
    if (check(a.substr(i, b.length()), b)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}