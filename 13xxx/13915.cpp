#include <iostream>
#include <set>
using namespace std;

void solve(int n) {
  set<set<int>> ans;
  while (n--) {
    int x; cin >> x;
    set<int> s;
    while (x > 0) {
      s.insert(x % 10);
      x /= 10;
    }
    ans.insert(s);
  }
  cout << ans.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}