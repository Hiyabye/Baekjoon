#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int q; cin >> q;
  cin.ignore();
  vector<string> v(q);
  for (int i=0; i<q; i++) getline(cin, v[i]);

  int r; cin >> r;
  while (r--) {
    int n; cin >> n;
    cout << "Rule " << n << ": " << (0 < n && n <= q ? v[n-1] : "No such rule") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}