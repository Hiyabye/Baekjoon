#include <algorithm>
#include <iostream>
using namespace std;

inline int calc(int a, int b) {
  if ((a == 1 && b == 2) || (a == 2 && b == 1)) return 10000;
  if (a == b) return a * 1000;
  return max(a, b) * 10 + min(a, b);
}

bool solve(void) {
  int s0, s1, r0, r1; cin >> s0 >> s1 >> r0 >> r1;
  if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) return false;

  if (calc(s0, s1) > calc(r0, r1)) cout << "Player 1 wins.";
  else if (calc(s0, s1) < calc(r0, r1)) cout << "Player 2 wins.";
  else cout << "Tie.";
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}