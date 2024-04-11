#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> a(4);
  for (int i=0; i<4; i++) cin >> a[i];
  sort(a.begin(), a.end());
  int b; cin >> b;

  return (a[0] == a[1] || a[0] + b == a[1]) && a[1] == a[3];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}