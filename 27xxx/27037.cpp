#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_set<int> us;
  while (us.find(n) == us.end()) {
    us.insert(n);
    int x = (n / 100 % 10) * 10 + n / 10 % 10;
    n = x * x;
  }
  cout << us.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}