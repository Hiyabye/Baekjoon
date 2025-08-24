#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  if (n != (n & -n)) return false;

  for (int i=1; i<=n; i<<=1) {
    if (!a[i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}