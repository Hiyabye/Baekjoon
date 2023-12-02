#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string s; cin >> s;
  sort(s.begin(), s.end());

  do {
    cout << s << "\n";
  } while (next_permutation(s.begin(), s.end()));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}