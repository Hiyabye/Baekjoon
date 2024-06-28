#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(5);
  for (int i=0; i<5; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<int>());

  int ans = 0;
  for (int i=1; i<5; i++) ans += (v[i] + 1000 >= v[0]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}