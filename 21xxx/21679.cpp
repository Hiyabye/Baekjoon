#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];
  
  int k; cin >> k;
  while (k--) {
    int p; cin >> p; p--;
    c[p]--;
  }

  for (int x : c) {
    cout << (x < 0 ? "yes" : "no") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}