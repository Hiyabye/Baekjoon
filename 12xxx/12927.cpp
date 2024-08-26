#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'N') continue;
    for (int j=i; j<s.length(); j+=i+1) {
      s[j] = (s[j] == 'Y' ? 'N' : 'Y');
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}