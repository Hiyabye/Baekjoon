#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> v(n+2, 0); v[1] = 1;
  for (int i=2; i<=n+1; i++) {
    int op; cin >> op;
    if (op == 1) {
      int x, y; cin >> x >> y;
      cout << (v[y] - v[x-1] == y - x + 1 ? "Yes" : "No");
      v[i] = v[i-1] + (v[y] - v[x-1] == y - x + 1);
    } else if (op == 2) {
      int x, y; cin >> x >> y;
      cout << (v[y] - v[x-1] == 0 ? "Yes" : "No");
      v[i] = v[i-1] + (v[y] - v[x-1] == 0);
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}