#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cnt = 1;
  vector<int> v(n+1, 0); v[1] = 1;
  for (int i=2; i<=n; i++) {
    if (v[i]) continue;
    v[i] = ++cnt;
    for (int j=i*2; j<=n; j+=i) v[j] = cnt;
  }

  cout << cnt << "\n";
  for (int i=1; i<=n; i++) {
    cout << v[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}