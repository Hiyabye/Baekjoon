#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  if (v[0][0] < v[0][1]) {
    if (v[0][0] < v[1][0]) {
      for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
          cout << v[i][j] << " ";
        }
        cout << "\n";
      }
    } else {
      for (int i=0; i<n; i++) {
        for (int j=n-1; j>=0; j--) {
          cout << v[j][i] << " ";
        }
        cout << "\n";
      }
    }
  } else {
    if (v[0][0] < v[1][0]) {
      for (int i=n-1; i>=0; i--) {
        for (int j=0; j<n; j++) {
          cout << v[j][i] << " ";
        }
        cout << "\n";
      }
    } else {
      for (int i=n-1; i>=0; i--) {
        for (int j=n-1; j>=0; j--) {
          cout << v[i][j] << " ";
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