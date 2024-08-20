#include <iostream>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<int> s;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    s.insert(x);
  }

  for (int i=1; i<n; i++) {
    int x; cin >> x;
    s.erase(x);
  }
  cout << *s.begin();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}