#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=1; i<n; i++) {
    if (a[i-1] > a[i]) {
      cout << "YES\n" << i << " " << i+1;
      return;
    }
  }
  cout << "NO";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}