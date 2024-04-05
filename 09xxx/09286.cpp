#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int m; cin >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  cout << "Case " << idx << ":\n";
  for (int x : v) {
    if (x < 6) cout << x + 1 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}