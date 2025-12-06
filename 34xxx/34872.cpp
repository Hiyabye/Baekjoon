#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  
  for (int i=0; i<3; i++) {
    for (int j=1; j<=n; j+=2) cout << j << " ";
    for (int j=2; j<=n; j+=2) cout << j << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}