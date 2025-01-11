#include <iostream>
#include <string>
using namespace std;

inline void add(string &s) {
  int h = stoi(s.substr(0, 2));
  int m = stoi(s.substr(3, 2)) + 1;
  h = (h + m / 60) % 24, m %= 60;
  s = (h < 10 ? "0" : "") + to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m);
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int a = 0, b = 0;
  bool flag = true;
  while (n--) {
    string s, t, p, q; cin >> s >> t >> p >> q;
    int c = 0, d = 0;
    while (p != q) {
      if (s <= p && p < t) c++;
      else d++;
      add(p);
    }
    if (c + d > 120) flag = false;
    a += c + d;
    if (c > d) b += c + d;
  }
  cout << (a >= 3000 && b >= 600 && flag ? "PASS" : "NON") << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}