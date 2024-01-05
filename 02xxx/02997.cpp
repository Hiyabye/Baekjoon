#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);
  
  cout << (b-a == c-b ? c+b-a : (b-a < c-b ? 2*b-a : a+c-b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}