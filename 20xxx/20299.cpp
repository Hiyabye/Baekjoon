#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, l; cin >> n >> k >> l;
  vector<vector<int> > x(n, vector<int>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> x[i][j];

  vector<int> ans;
  for (int i=0; i<n; i++) {
    if ((x[i][0] >= l) && (x[i][1] >= l) && (x[i][2] >= l) && (x[i][0] + x[i][1] + x[i][2] >= k)) {
      ans.push_back(x[i][0]);
      ans.push_back(x[i][1]);
      ans.push_back(x[i][2]);
    }
  }

  cout << ans.size() / 3 << "\n";
  for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}