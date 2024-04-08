#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<m; i++) {
    bool flag = true;
    for (int j=0; j<n; j++) {
      if (v[j][i] == 'O') {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << i+1 << "\n";
      return;
    }
  }
  cout << "ESCAPE FAILED";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}