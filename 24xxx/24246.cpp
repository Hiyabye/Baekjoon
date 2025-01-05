#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  for (int i=1; i<n; i++) {
    if (p[i] > p[0]) continue;
    cout << i;
    return;
  }
  cout << "infinity";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}