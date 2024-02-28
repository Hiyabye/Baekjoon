#include <iostream>
#include <string>
#include <utility>
using namespace std;

const pair<string, int> p[] = {
  {"Ottawa", 0},
  {"Victoria", -300},
  {"Edmonton", -200},
  {"Winnipeg", -100},
  {"Toronto", 0},
  {"Halifax", 100},
  {"St. John's", 130}
};

inline int mod24(int x) {
  return (x + 24) % 24;
}

inline string time(int h, int m) {
  if (h == 0 && m == 0) return "0";
  if (h == 0) return to_string(m);
  if (m == 0) return to_string(h) + "00";
  return to_string(h) + to_string(m);
}

void solve(void) {
  int n; cin >> n;

  for (int i=0; i<7; i++) {
    int h = mod24(n / 100 + p[i].second / 100);
    int m = n % 100 + p[i].second % 100;
    if (m >= 60) h = mod24(h+1), m -= 60;
    cout << time(h, m) << " in " << p[i].first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}