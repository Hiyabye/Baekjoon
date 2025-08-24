#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  string s; cin >> s;

  for (int i=0; i<n; i++) {
    if (s[i] == '0' || s[i]-'0'+m < 10) continue;
    m -= 10-s[i]+'0'; s[i] = '0';
  }
  s[n-1] = (s[n-1]-'0'+m) % 10 + '0';

  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}