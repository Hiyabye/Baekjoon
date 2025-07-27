#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  if (n == 0 && k == 0) return false;

  int a = 1, b = k;
  while (n--) {
    int x; string s; cin >> x >> s;
    if (s == "SAFE") a = max(a, x);
    else             b = min(b, x);
  }
  cout << a+1 << " " << b-1 << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}