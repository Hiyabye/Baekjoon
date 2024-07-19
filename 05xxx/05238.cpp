#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int k; cin >> k;
  vector<int> x(k);
  for (int i=0; i<k; i++) cin >> x[i];
  
  for (int i=2; i<k; i++) {
    if (x[i] != x[i-1] + x[i-2]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}