#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  bool a = false, b = false, c = false;
  while (n--) {
    string s; cin >> s;
    if (s == "keys") a = true;
    if (s == "phone") b = true;
    if (s == "wallet") c = true;
  }

  if (a && b && c) cout << "ready";
  if (!a) cout << "keys\n";
  if (!b) cout << "phone\n";
  if (!c) cout << "wallet\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}