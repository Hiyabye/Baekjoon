#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int a, d; cin >> a >> d;
  if (a == 0 && d == 0) return false;

  vector<int> b(a), c(d);
  for (int i=0; i<a; i++) cin >> b[i];
  for (int i=0; i<d; i++) cin >> c[i];
  sort(c.begin(), c.end());

  cout << (*min_element(b.begin(), b.end()) < c[1] ? "Y" : "N") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}