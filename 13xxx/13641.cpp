#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) {
    int x; cin >> x; x--;
    a[x] = i;
  }
  for (int i=0; i<n; i++) {
    int x; cin >> x; x--;
    b[i] = a[x];
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) for (int j=n-1; j>i; j--) {
    if (b[j-1] <= b[j]) continue;
    swap(b[j-1], b[j]);
    ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}