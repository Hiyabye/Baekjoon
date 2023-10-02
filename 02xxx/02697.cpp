#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string a; cin >> a;

  if (next_permutation(a.begin(), a.end())) cout << a << "\n";
  else cout << "BIGGEST\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}