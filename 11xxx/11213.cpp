#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> b(7, 0);
  for (int i=0; i<n; i++) {
    if (b[a[i]]) b[a[i]] = -1;
    else b[a[i]] = i+1;
  }

  for (int i=6; i>=1; i--) {
    if (b[i] == 0 || b[i] == -1) continue;
    cout << b[i];
    return;
  }
  cout << "none";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}