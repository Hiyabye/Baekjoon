#include <iostream>
#include <string>
using namespace std;

string next(const string &s) {
  int h = stoi(s.substr(0, 2));
  int m = stoi(s.substr(3, 2));

  m++;
  if (m == 60) h++, m = 0;
  if (h == 13) h = 1;
  return (h < 10 ? "0" : "") + to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m);
}

int calc(const string &s) {
  int m = stoi(s.substr(3, 2));
  if (m == 0) return stoi(s.substr(0, 2));
  if (m == 15 || m == 30 || m == 45) return 1;
  return 0;
}

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;

  n -= calc(s);
  while (n > 0) {
    s = next(s);
    n -= calc(s);
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}