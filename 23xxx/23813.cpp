#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n; cin >> n;

  long long ans = 0;
  for (int i=0; i<n.length(); i++) {
    n = n.back() + n.substr(0, n.length()-1);
    ans += stoll(n);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}