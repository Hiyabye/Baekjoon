#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  bool ans = true;
  for (int i=0; i<3; i++) {
    bool flag = false;
    for (int j=0; j<n; j++) {
      int x; cin >> x;
      if (x == 7) flag = true;
    }
    if (!flag) ans = false;
  }
  cout << (ans ? "777" : "0");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}