#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  long long ans = 0, cur = 1;
  for (int i=s.length()-1; i>=0; i--) {
    ans += (s[i]-'A'+1) * cur;
    cur *= 26;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}