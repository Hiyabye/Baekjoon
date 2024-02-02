#include <iostream>
using namespace std;

void solve(int idx) {
  int a, b, c; cin >> a >> b >> c;

  cout << "Case #" << idx << ": ";
  if (a == b && b == c) cout << "equilateral";
  else if (a + b <= c || b + c <= a || c + a <= b) cout << "invalid!";
  else if (a == b || b == c || c == a) cout << "isosceles";
  else cout << "scalene";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}