#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  if (*max_element(v.begin(), v.end()) == 0) return false;

  int ans = 0;
  while (v[0] != v[1] || v[1] != v[2] || v[2] != v[3]) {
    int tmp = v[0];
    for (int i=0; i<3; i++) v[i] = abs(v[i] - v[i+1]);
    v[3] = abs(v[3] - tmp);
    ans++;
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}