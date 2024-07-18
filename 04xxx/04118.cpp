#include <iostream>
#include <unordered_set>
using namespace std;

bool check(const unordered_set<int> &s) {
  for (int i=1; i<=49; i++) {
    if (s.find(i) == s.end()) return false;
  }
  return true;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  unordered_set<int> s;
  for (int i=0; i<n; i++) for (int j=0; j<6; j++) {
    int x; cin >> x;
    s.insert(x);
  }
  cout << (check(s) ? "Yes" : "No") << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}