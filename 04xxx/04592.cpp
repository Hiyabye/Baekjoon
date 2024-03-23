#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> v;
  while (n--) {
    int x; cin >> x;
    if (v.empty() || v.back() != x) v.push_back(x);
  }

  for (int x : v) cout << x << " ";
  cout << "$\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}