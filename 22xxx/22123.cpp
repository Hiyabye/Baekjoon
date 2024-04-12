#include <iostream>
#include <string>
using namespace std;

int time(const string &a, const string &b) {
  int h = stoi(b.substr(0, 2)) - stoi(a.substr(0, 2));
  int m = stoi(b.substr(3, 2)) - stoi(a.substr(3, 2));
  int s = stoi(b.substr(6, 2)) - stoi(a.substr(6, 2));

  if (s < 0) s += 60, m--;
  if (m < 0) m += 60, h--;
  if (h < 0) h += 24;

  return h * 3600 + m * 60 + s == 0 ? 86400 : h * 3600 + m * 60 + s;
}

string solve(void) {
  string s, f; int k; cin >> s >> f >> k;

  int t = time(s, f) / 60;
  if (t >= k) return "Perfect";

  t += 60;
  return t >= k ? "Test" : "Fail";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << solve() << "\n";
  return 0;
}