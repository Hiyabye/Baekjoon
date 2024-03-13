#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  int a, b; char c; cin >> a >> c >> b;
  if (a == 0 && b == 0 && c == 'W') return false;

  cout << (c == 'D' ? to_string(a+b) : (a + 200 < b ? "Not allowed" : to_string(a-b))) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}