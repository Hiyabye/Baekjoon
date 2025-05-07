#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  set<int> s;
  while (n--) {
    int a; cin >> a;
    s.insert(a);
  }

  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}