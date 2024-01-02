#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
vector<vector<int> > a, b;

void solve(void) {
  cin >> n >> m;
  a.resize(n, vector<int>(m));
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> a[i][j];
    }
  }

  cin >> m >> k;
  b.resize(m, vector<int>(k));
  for (int i=0; i<m; i++) {
    for (int j=0; j<k; j++) {
      cin >> b[i][j];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<k; j++) {
      int sum = 0;
      for (int l=0; l<m; l++) {
        sum += a[i][l] * b[l][j];
      }
      cout << sum << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}