#include <algorithm>
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

  cout << max_element(m.begin(), m.end(), [](auto a, auto b) {
    return a.second < b.second;
  })->second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}