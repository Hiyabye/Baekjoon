#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<vector<int>> a(n, vector<int>(k));
  for (int i=0; i<n; i++) for (int j=0; j<k; j++) cin >> a[i][j];

  vector<int> b(k, 0);
  for (int i=0; i<k; i++) for (int j=1; j<n; j++) {
    if (a[j][i] > a[b[i]][i]) b[i] = j;
  }
  for (int i=0; i<k; i++) for (int j=1; j<n; j++) {
    if (b[i] == -1 || b[i] == j) continue;
    if (a[j][i] == a[b[i]][i]) b[i] = -1;
  }

  set<int> s;
  for (int i=0; i<k; i++) {
    if (b[i] != -1) s.insert(b[i]);
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}