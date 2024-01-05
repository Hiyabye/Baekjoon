#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> f(n+1, 0);
  while (m--) {
    int a, b; cin >> a >> b;
    f[a]++; f[b]++;
  }

  for (int i=1; i<=n; i++) {
    cout << f[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}