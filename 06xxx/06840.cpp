#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);

  cout << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}