#include <iostream>
using namespace std;

void solve(void) {
  int a_attack, a_life; cin >> a_attack >> a_life;
  int b_attack, b_life; cin >> b_attack >> b_life;

  while (a_life > 0 && b_life > 0) {
    a_life -= b_attack;
    b_life -= a_attack;
  }

  if (a_life <= 0 && b_life <= 0) cout << "DRAW";
  else if (a_life <= 0) cout << "PLAYER B";
  else cout << "PLAYER A";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}