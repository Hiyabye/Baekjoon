#include <iostream>
#include <vector>
using namespace std;

inline int calc(int a, int b) {
  return (a + b) % 10;
}

void solve(void) {
  int a, b; cin >> a >> b;

  vector<int> v = {a, b, calc(a, b)};
  while (v[0] != v[v.size()-2] || v[1] != v[v.size()-1]) {
    v.push_back(calc(v[v.size()-2], v[v.size()-1]));
  }
  cout << v.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}