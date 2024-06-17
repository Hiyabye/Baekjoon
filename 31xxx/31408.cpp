#include <iostream>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  unordered_map<int, int> a;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    a[x]++;
  }

  for (auto [k, v] : a) {
    if (v > (n+1)/2) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}