#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int cur = 0;
  unordered_set<int> us; us.insert(cur);
  for (int i=1; i<=n; i++) {
    if (cur - i < 0 || us.find(cur-i) != us.end()) {
      cur += i;
    } else {
      cur -= i;
    }
    us.insert(cur);
  }
  cout << cur;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}