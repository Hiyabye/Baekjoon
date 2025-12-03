#include <iostream>
#include <map>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  map<int, int> mp;
  for (int i=0; i<2*n; i++) {
    int a; cin >> a;
    mp[a]++;
  }

  for (auto &[_, v] : mp) {
    if (v > 2) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}