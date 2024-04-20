#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (a[i] > b[j]) ans++;
    if (a[i] < b[j]) ans--;
  }
  cout << (ans > 0 ? "first" : (ans < 0 ? "second" : "tie"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}