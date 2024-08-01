#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s;
  unordered_map<string, int> mp;
  while (cin >> s) mp[s]++;

  int cnt = 0;
  for (auto [_, v] : mp) {
    cnt += v;
  }

  for (string s : {"Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex"}) {
    cout << s << " " << mp[s] << " " << fixed << setprecision(2) << (double)mp[s] / cnt << "\n";
  }
  cout << "Total " << cnt << " 1.00";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}