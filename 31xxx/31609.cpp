#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<bool> v(10, false);
  while (n--) {
    int a; cin >> a;
    v[a] = true;
  }

  for (int i=0; i<10; i++) {
    if (v[i]) cout << i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}