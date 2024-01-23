#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  for (int i=0; i<n; i++) {
    int m; cin >> m;
    if (m < 250) cout << "4 ";
    else if (m < 275) cout << "3 ";
    else if (m < 300) cout << "2 ";
    else cout << "1 ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}