#include <algorithm>
#include <iostream>
using namespace std;

int solve(void) {
  int a, b, s; cin >> a >> b >> s;

  for (int i=max(a, b); (i-a)*(i-b)<=s; i++) {
    if ((i-a)*(i-b) == s) return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}