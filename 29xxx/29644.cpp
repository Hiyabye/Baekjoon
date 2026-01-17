#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int s, p; cin >> s >> p;
  if (p & 1) {
    cout << -1;
    return;
  }

  for (int a=1; a<p/2; a++) {
    int b = p / 2 - a;
    if (a * b == s) {
      if (a < b) swap(a, b);
      cout << a << " " << b;
      return;
    }
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}