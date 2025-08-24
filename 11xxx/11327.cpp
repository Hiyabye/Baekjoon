#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int x, y; cin >> x >> y;

  long long ans = a[n-1];
  for (int i=n-2; i>=0; i--) {
    ans = ans * x + a[i];
  }
  cout << (y == ans ? "On" : (y < ans ? "Inside" : "Outside")) << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}