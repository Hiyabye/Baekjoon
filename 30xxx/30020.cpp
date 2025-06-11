#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  if (a <= b || a > 2 * b) { cout << "NO"; return; }

  cout << "YES\n" << a-b << "\naba";
  for (int i=0; i<2*b-a; i++) cout << "ba";
  cout << "\n";
  for (int i=1; i<a-b; i++) cout << "aba\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}