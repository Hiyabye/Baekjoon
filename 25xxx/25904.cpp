#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n, x; cin >> n >> x;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  while (true) {
    for (int i=0; i<n; i++) {
      if (x > t[i]) return i+1;
      x++;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}