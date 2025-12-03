#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  set<int> s;
  for (int i=0; i<10; i++) {
    int d; cin >> d;
    s.insert(d);
  }
  cout << 4 - (int)s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}