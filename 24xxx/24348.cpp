#include <algorithm>
#include <iostream>
using namespace std;

void sort(long long &a, long long &b, long long &c) {
  if (a > b) swap(a, b);
  if (a > c) swap(a, c);
  if (b > c) swap(b, c);
}

void solve(void) {
  long long a, b, c; cin >> a >> b >> c;

  sort(a, b, c);
  cout << (b ? a + b * c : c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}