#include <iostream>
#include <string>
using namespace std;

string turu(int k) {
  if (k >= 5) return "tu+ru*" + to_string(k);
  string ret = "tu";
  while (k--) ret += "ru";
  return ret;
}

string solve(void) {
  int n; cin >> n;

  switch (n % 14) {
    case 0: case 2: return "sukhwan";
    case 1: case 13: return "baby";
    case 3: case 7: case 11: return turu(n/14+2);
    case 4: case 8: case 12: return turu(n/14+1);
    case 5: return "very";
    case 6: return "cute";
    case 9: return "in";
    case 10: return "bed";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}