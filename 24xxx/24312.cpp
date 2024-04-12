#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<4; i++) {
    ans += (ans < 0 ? v[i] : -v[i]);
  }
  cout << abs(ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}