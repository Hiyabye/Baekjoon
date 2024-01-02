#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 1;
  for (int i=0; i<n; i++) {
    if (s[i] == 'L') i++;
    ans++;
  }
  cout << min(ans, n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}