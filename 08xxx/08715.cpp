#include <iostream>
#include <unordered_set>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  unordered_set<int> s;
  for (int i=0; i<n; i++) {
    int a; cin >> a;
    s.insert(a);
  }

  for (int i=1; i<=n; i++) {
    if (s.find(i) == s.end()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "TAK" : "NIE");
  return 0;
}