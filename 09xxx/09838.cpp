#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, int> k;
  for (int i=1; i<=n; i++) {
    int x; cin >> x;
    k[x] = i;
  }

  for (int i=1; i<=n; i++) {
    cout << k[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}