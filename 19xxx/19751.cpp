#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(const vector<int>& a, const vector<int>& b) {
  vector<__int128> v(a.begin(), a.end()), w(b.begin(), b.end());
  return (v[0] * v[3] + v[1] * v[2]) * (w[1] * w[3]) > (w[0] * w[3] + w[1] * w[2]) * (v[1] * v[3]);
}

void solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  sort(v.begin(), v.end());

  vector<int> ans = v;
  while (next_permutation(v.begin(), v.end())) {
    if (cmp(ans, v)) ans = v;
  }
  for (int n : ans) cout << n << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}