#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  int cur = 0, save = 0;
  while (n--) {
    string s; cin >> s;
    if (s == "save") {
      save = cur;
    } else if (s == "load") {
      cur = save;
    } else if (s == "shoot") {
      if (cur) cur--;
    } else {
      cur += k;
    }
    cout << cur << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}