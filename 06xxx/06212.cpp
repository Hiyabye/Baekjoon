#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;

  vector<int> v(10, 0);
  for (int i=m; i<=n; i++) {
    int x = i;
    while (x) {
      v[x % 10]++;
      x /= 10;
    }
  }

  for (int i=0; i<10; i++) {
    cout << v[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}