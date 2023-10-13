#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int l, r, a; cin >> l >> r >> a;

  while (a--) {
    if (l < r) l++;
    else r++;
  }
  cout << min(l, r) * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}