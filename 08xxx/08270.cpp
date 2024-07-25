#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<int> s;
  while (n--) {
    int x; cin >> x;
    s.insert(x);
  }

  cout << 15000 - s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}