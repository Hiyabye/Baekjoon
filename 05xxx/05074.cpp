#include <iostream>
#include <string>
using namespace std;

string format(int n) {
  string ret = to_string(n);
  while (ret.size() < 2) ret = '0' + ret;
  return ret;
}

bool solve(void) {
  string a, b; cin >> a >> b;
  if (a == "00:00" && b == "00:00") return false;

  int m = stoi(a.substr(3, 2)) + stoi(b.substr(3, 2));
  int h = stoi(a.substr(0, 2)) + stoi(b.substr(0, 2)) + m / 60;
  m %= 60;

  cout << format(h % 24) << ":" << format(m);
  if (h >= 24) cout << " +" << h / 24;
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}