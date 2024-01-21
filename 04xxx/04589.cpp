#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int> > v(n, vector<int>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  cout << "Gnomes:\n";
  for (int i=0; i<n; i++) {
    if (v[i][0] < v[i][1] && v[i][1] < v[i][2]) cout << "Ordered\n";
    else if (v[i][0] > v[i][1] && v[i][1] > v[i][2]) cout << "Ordered\n";
    else cout << "Unordered\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}