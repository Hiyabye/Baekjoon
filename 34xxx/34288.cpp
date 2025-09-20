#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int l, a; cin >> l >> a;
  vector<int> h(l+1);
  for (int i=0; i<=l; i++) cin >> h[i];

  for (int i=1; i<=l; i++) {
    if (h[i] - h[i-1] > a) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "POSSIBLE" : "BUG REPORT");
  return 0;
}