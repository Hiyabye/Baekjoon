#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int d; cin >> d;

  vector<int> v; int x;
  while (cin >> x) v.push_back(x);
  for (int x : v) {
    if (d <= x) break;
    d += x;
  }
  cout << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}