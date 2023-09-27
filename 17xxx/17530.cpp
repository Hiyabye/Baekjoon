#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int mx = v[0], idx = 0;
  for (int i=1; i<n; i++) {
    if (v[i] > mx) {
      mx = v[i];
      idx = i;
    }
  }
  cout << (idx == 0 ? "S" : "N");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}