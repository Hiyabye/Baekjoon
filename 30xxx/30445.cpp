#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

inline bool happy(char c) {
  return c == 'H' || c == 'A' || c == 'P' || c == 'Y';
}

inline bool sad(char c) {
  return c == 'S' || c == 'A' || c == 'D';
}

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); string t;

  int h = 0, g = 0;
  while (ss >> t) {
    for (char c : t) {
      if (happy(c)) h++;
      if (sad(c)) g++;
    }
  }
  if (h == 0 && g == 0) h++, g++;

  int ans = h * 100;
  cout << ans / (h + g) << ".";
  cout << setw(2) << setfill('0') << (ans % (h + g) * 100 + (h + g) / 2) / (h + g);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}