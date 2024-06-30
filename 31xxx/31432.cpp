#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  cout << "YES\n" << 111 * d.back();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}