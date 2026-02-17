#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 5;
  for (int i=0; i<n-4; i++) {
    int cur = 0;
    for (int j=0; j<5; j++) {
      if (s[i+j] != "eagle"[j]) cur++;
    }
    ans = min(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}