#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> a(5), b(5);
  for (int i=0; i<5; i++) cin >> a[i];
  for (int i=0; i<5; i++) cin >> b[i];

  for (int i=0; i<5; i++) for (int j=0; j<5; j++) {
    if (i != j && a[i] == b[j]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}