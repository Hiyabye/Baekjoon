#include <algorithm>
#include <iostream>
using namespace std;

void solve(int idx) {
  long long l, r; cin >> l >> r;

  cout << "Case #" << idx << ": " << min(l, r) * (min(l, r) + 1) / 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}