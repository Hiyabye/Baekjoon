#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<bool> v(31, false);

  for (int i=0; i<28; i++) {
    int x; cin >> x;
    v[x] = true;
  }

  for (int i=1; i<=30; i++) {
    if (!v[i]) cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}