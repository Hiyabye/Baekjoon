#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n, m, x;
  map<int, bool> mp;

  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> x;
    mp[x] = true;
  }

  cin >> m;
  for (int i=0; i<m; i++) {
    cin >> x;
    cout << mp[x] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}