#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void solve(void) {
  int br, bc; cin >> br >> bc;
  int dr, dc; cin >> dr >> dc;
  int jr, jc; cin >> jr >> jc;

  int bessie = max(abs(jr-br), abs(jc-bc));
  int daisy = abs(jr-dr) + abs(jc-dc);
  cout << (bessie < daisy ? "bessie" : (bessie > daisy ? "daisy" : "tie"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}