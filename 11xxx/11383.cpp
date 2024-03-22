#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  vector<string> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (b[i][2*j] != a[i][j] || b[i][2*j+1] != a[i][j]) {
        return false;
      }
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Eyfa" : "Not Eyfa");
  return 0;
}