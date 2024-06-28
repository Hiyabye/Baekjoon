#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;

  int ans = b.length();
  for (int i=0; i<b.length()-a.length()+1; i++) {
    int cnt = 0;
    for (int j=0; j<a.length(); j++) {
      if (a[j] != b[i+j]) cnt++;
    }
    ans = min(ans, cnt);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}