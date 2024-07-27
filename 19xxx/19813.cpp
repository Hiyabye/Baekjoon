#include <iomanip>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

inline tuple<int, int, int> parse(const string &s, char c) {
  int a = s.find_first_of(c);
  int b = s.find_last_of(c);
  if (c == '.') return {stoi(s.substr(0, a)), stoi(s.substr(a+1, b-a-1)), stoi(s.substr(b+1))};
  return {stoi(s.substr(a+1, b-a-1)), stoi(s.substr(0, a)), stoi(s.substr(b+1))};
}

void solve(void) {
  string s; cin >> s;

  tuple<int, int, int> ans = (s.find(".") != string::npos) ? parse(s, '.') : parse(s, '/');

  cout << setw(2) << setfill('0') << get<0>(ans) << ".";
  cout << setw(2) << setfill('0') << get<1>(ans) << ".";
  cout << setw(4) << setfill('0') << get<2>(ans) << " ";
  cout << setw(2) << setfill('0') << get<1>(ans) << "/";
  cout << setw(2) << setfill('0') << get<0>(ans) << "/";
  cout << setw(4) << setfill('0') << get<2>(ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}