#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (a[i] & 1) cnt++;
  }
  cout << "2 " << (cnt * 2 >= n ? 1 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}