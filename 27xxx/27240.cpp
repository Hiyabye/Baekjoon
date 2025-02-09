#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, a, b; cin >> n >> a >> b;
  int s, t; cin >> s >> t;
  if (s > t) swap(s, t);

  if (a < s && t < b) {
    cout << "City";
  } else if (s >= b || t <= a) {
    cout << "Outside";
  } else {
    cout << "Full";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}