#include <cmath>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  if (s[s.length() >> 1] == '0') return stoi(s);
  return (stoi(s.substr(0, s.length() >> 1)) + 1) * (int)pow(10, (s.length() + 1) >> 1);
}

void solve(void) {
  int n; cin >> n;

  int prize = 100;
  while (n--) {
    prize = calc(to_string(prize));
    cout << prize << "\n";
    prize <<= 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}