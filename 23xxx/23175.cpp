#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];

  for (int i=0; i<m; i++) {
    cout << b[i] << " ";
    i += b[i] - 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}