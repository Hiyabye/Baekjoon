#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n; i++) {
    for (int j=m-1; j>=0; j--) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}