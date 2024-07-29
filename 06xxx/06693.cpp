#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
using namespace std;

inline pair<double, double> calc(int l, const string &d) {
  if (d == "N") return {0, l};
  if (d == "S") return {0, -l};
  if (d == "E") return {l, 0};
  if (d == "W") return {-l, 0};
  if (d == "NE") return {sqrt(2)*l/2, sqrt(2)*l/2};
  if (d == "NW") return {-sqrt(2)*l/2, sqrt(2)*l/2};
  if (d == "SE") return {sqrt(2)*l/2, -sqrt(2)*l/2};
  if (d == "SW") return {-sqrt(2)*l/2, -sqrt(2)*l/2};
  return {0, 0};
}

bool solve(void) {
  string s; cin >> s;
  if (s == "END") return false;

  stringstream ss(s); string t;
  pair<double, double> ans = {0, 0};
  while (getline(ss, t, ',')) {
    if (t.back() == '.') t.pop_back();
    if (isalpha(t[t.length()-2])) {
      auto [dx, dy] = calc(stoi(t.substr(0, t.length()-2)), t.substr(t.length()-2));
      ans.first += dx; ans.second += dy;
    } else {
      auto [dx, dy] = calc(stoi(t.substr(0, t.length()-1)), t.substr(t.length()-1));
      ans.first += dx; ans.second += dy;
    }
  }
  cout << fixed << setprecision(3) << "You can go to (" << ans.first << "," << ans.second;
  cout << fixed << setprecision(3) << "), the distance is " << hypot(ans.first, ans.second) << " steps.\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}