#include <algorithm>
#include <iostream>
using namespace std;

void solve(int idx) {
  int a, b, c; cin >> a >> b >> c;

  if (a > c) swap(a, c);
  if (b > c) swap(b, c);

  cout << "Case #" << idx << ": " << (a*a + b*b == c*c ? "YES" : "NO") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}