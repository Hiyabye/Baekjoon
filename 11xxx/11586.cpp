#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  int k; cin >> k;

  switch (k) {
    case 1: for (int i=0; i<n; i++) cout << v[i] << "\n"; break;
    case 2: for (int i=0; i<n; i++) {
              for (int j=n-1; j>=0; j--) cout << v[i][j];
              cout << "\n";
            } break;
    case 3: for (int i=n-1; i>=0; i--) cout << v[i] << "\n"; break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}