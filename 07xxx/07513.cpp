#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int m; cin >> m;
  vector<string> w(m);
  for (int i=0; i<m; i++) cin >> w[i];
  int n; cin >> n;

  cout << "Scenario #" << idx << ":\n";
  while (n--) {
    int k; cin >> k;
    while (k--) {
      int x; cin >> x;
      cout << w[x];
    }
    cout << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}