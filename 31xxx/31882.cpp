#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  long long ans = 0, cnt = 0;
  for (int i=0; i<n; i++) {
    if (s[i] == '2') cnt++;
    else cnt = 0;
    ans += cnt * (cnt + 1) / 2;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}