#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int x, k; cin >> x >> k;
  vector<vector<long long>> v(2, vector<long long>(k, 0));
  for (int i=0; i<2; i++) for (int j=0; j<x; j++) {
    int a; cin >> a; a--;
    v[i][a]++;
  }

  long long ans = 0;
  for (int i=0; i<k; i++) {
    ans += v[0][i] * (x - v[1][i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}