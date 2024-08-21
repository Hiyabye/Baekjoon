#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  string ans = "";
  for (int i=1; i<=n; i++) {
    if (ans.find(to_string(i)) == string::npos) {
      ans += to_string(i);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}