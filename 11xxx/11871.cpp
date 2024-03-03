#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans ^= (p[i] & 1) ? (p[i]/2+1) : (p[i]/2-1);
  }
  cout << (ans ? "koosaga" : "cubelover");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}