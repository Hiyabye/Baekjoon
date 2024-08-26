#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  vector<vector<double>> v(n, vector<double>(m));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    int a; double b; cin >> a >> b; a--;
    v[a][i] = b;
  }

  vector<double> ans(n);
  for (int i=0; i<n; i++) {
    ans[i] = *max_element(v[i].begin(), v[i].end());
  }
  sort(ans.begin(), ans.end(), greater<double>());

  cout << fixed << setprecision(1) << accumulate(ans.begin(), ans.begin()+k, 0.0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}