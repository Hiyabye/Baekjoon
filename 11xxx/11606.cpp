#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  int p = 1, q = k;
  while (n--) {
    int a; string b; cin >> a >> b;
    if (b == "SAFE") p = max(p, a);
    else q = min(q, a);
  }
  cout << p + 1 << " " << q - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}