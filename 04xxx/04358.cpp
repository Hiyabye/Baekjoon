#include <iomanip>
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  map<string, int> st; string s;
  while (getline(cin, s)) {
    st[s]++;
  }

  int cnt = 0;
  for (const auto &p : st) {
    cnt += p.second;
  }

  for (const auto &p : st) {
    cout << p.first << " " << fixed << setprecision(4) << (double)p.second / cnt * 100 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}