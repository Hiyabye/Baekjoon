#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  bool ans = true;
  while (n--) {
    int h; cin >> h;
    if (h < 48) ans = false;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "True" : "False");
  return 0;
}