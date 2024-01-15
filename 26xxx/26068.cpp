#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string x; cin >> x;
    if (stoi(x.substr(2)) <= 90) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}