#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  if (n > 500) return true;

  unordered_set<int> s;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (s.find(a[i] ^ a[j]) != s.end()) return true;
    s.insert(a[i] ^ a[j]);
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}