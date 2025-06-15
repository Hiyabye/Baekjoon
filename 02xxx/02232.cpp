#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n+2, 0);
  for (int i=1; i<=n; i++) cin >> p[i];

  for (int i=1; i<=n; i++) {
    if (p[i-1] <= p[i] && p[i] >= p[i+1]) {
      cout << i << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}