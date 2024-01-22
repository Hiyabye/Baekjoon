#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int y; cin >> y;

  vector<string> v = {
    "ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO",
    "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO",
    "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
    "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU",
    "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO"
  };
  cout << v[y-1995] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}