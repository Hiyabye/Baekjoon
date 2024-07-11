#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n+1);
  for (int i=1; i<=n; i++) cin >> v[i];

  int m; cin >> m;
  while (m--) {
    int a, b; cin >> a >> b;
    if (a == 1) {
      for (int i=b; i<=n; i+=b) v[i] = !v[i];
    } else if (a == 2) {
      v[b] = !v[b];
      for (int i=1; b-i >= 1 && b+i <= n && v[b-i] == v[b+i]; i++) {
        v[b-i] = !v[b-i];
        v[b+i] = !v[b+i];
      }
    }
  }

  for (int i=1; i<=n; i+=20) {
    for (int j=i; j<i+20 && j<=n; j++) {
      cout << v[j] << " ";
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