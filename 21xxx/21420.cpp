#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    int x; cin >> x;
    if (x == 1) a++;
    else b++;
  }
  cout << min(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}