#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];
  if (k < 2) {
    cout << "LOSE";
    return;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int r = (i + j) % k;
      if (r == 0) a[i][j]++;
      else if (r == 1) a[i][j]--;
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}