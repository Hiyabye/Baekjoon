#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  if (n == 1) {
    if (m == 1) {
      cout << "1\n1";
    } else {
      cout << "2\n";
      for (int i=0; i<m; i++) {
        cout << (i & 1 ? 1 : 2) << " ";
      }
    }
  } else {
    if (m == 1) {
      cout << "2\n";
      for (int i=0; i<n; i++) {
        cout << (i & 1 ? 1 : 2) << "\n";
      }
    } else {
      cout << "4\n";
      for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
          cout << "1234"[(j+2*i) % 4] << " ";
        }
        cout << "\n";
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}