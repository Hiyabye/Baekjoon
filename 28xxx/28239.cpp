#include <iostream>
using namespace std;

void solve(void) {
  long long m; cin >> m;

  int first = -1;
  for (int i=0; i<64; i++) {
    if ((m >> i) & 1) {
      first = i;
      break;
    }
  }

  int last = -1;
  for (int i=63; i>=0; i--) {
    if ((m >> i) & 1) {
      last = i;
      break;
    }
  }

  if (first == last) cout << first-1 << " " << last-1 << "\n";
  else               cout << first << " " << last << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}