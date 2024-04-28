#include <iomanip>
#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, double> mp = {
  {"A+", 4.5}, {"A", 4.0},
  {"B+", 3.5}, {"B", 3.0},
  {"C+", 2.5}, {"C", 2.0},
  {"D+", 1.5}, {"D", 1.0},
  {"F", 0.0}
};

void solve(void) {
  string s; cin >> s;

  int cnt = 0;
  double sum = 0;
  for (int i=0; i<s.length(); i++) {
    if (i+1 < s.length() && mp.find(s.substr(i, 2)) != mp.end()) {
      sum += mp[s.substr(i++, 2)];
    } else {
      sum += mp[s.substr(i, 1)];
    }
    cnt++;
  }
  cout << fixed << setprecision(5) << sum / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}