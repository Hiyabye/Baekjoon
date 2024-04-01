#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cur = 1;
  while (n) {
    if (to_string(cur).length() >= n) {
      cout << to_string(cur)[n-1];
      return;
    } else {
      n -= to_string(cur).length();
      cur++;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}