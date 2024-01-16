#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, int> m;
  while (n--) {
    int x; cin >> x;
    m[x]++;
  }

  int v; cin >> v;
  cout << m[v];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}