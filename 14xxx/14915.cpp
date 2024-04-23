#include <iostream>
#include <vector>
using namespace std;

inline char format(int x) {
  return x < 10 ? x + '0' : x - 10 + 'A';
}

void solve(void) {
  int m, n; cin >> m >> n;

  vector<int> v;
  while (m) {
    v.push_back(m % n);
    m /= n;
  }

  if (v.empty()) v.push_back(0);
  for (int i=v.size()-1; i>=0; i--) {
    cout << format(v[i]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}