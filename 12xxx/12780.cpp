#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string h; cin >> h;
  string n; cin >> n;

  int ans = 0;
  for (int i=0; i<h.length()-n.length()+1; i++) {
    if (h.substr(i, n.length()) == n) {
      ans++;
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