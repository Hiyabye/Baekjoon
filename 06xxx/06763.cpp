#include <iostream>
using namespace std;

void solve(void) {
  int l; cin >> l;
  int c; cin >> c;

  if (c <= l) cout << "Congratulations, you are within the speed limit!";
  else if (l+1 <= c && c <= l+20) cout << "You are speeding and your fine is $100.";
  else if (l+21 <= c && c <= l+30) cout << "You are speeding and your fine is $270.";
  else cout << "You are speeding and your fine is $500.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}