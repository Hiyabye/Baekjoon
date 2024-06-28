#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> a(10);
  for (int i=0; i<10; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cout << a[7] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}