#include <iostream>
using namespace std;

void solve(void) {
  int p1, s1; cin >> p1 >> s1;
  int s2, p2; cin >> s2 >> p2;

  cout << (p1+p2 > s1+s2 ? "Persepolis" : (p1+p2 < s1+s2 ? "Esteghlal" : (s1 > p2 ? "Esteghlal" : (s1 < p2 ? "Persepolis" : "Penalty"))));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}