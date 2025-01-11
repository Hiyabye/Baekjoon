#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int y; cin >> y;
  if (y == 1) {
    cout << 0;
    return;
  }

  vector<int> f(10, 1);
  for (int i=1; i<=9; i++) {
    f[i] = f[i-1] * i;
  }

  string ans = "";
  for (int i=9; i>0; i--) {
    while (y >= f[i]) {
      y -= f[i];
      ans = to_string(i) + ans;
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