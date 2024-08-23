#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp1 = {
  {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
  {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
  {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
};

unordered_map<int, int> mp2 = {
  {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
  {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
};

inline bool leap(int y) {
  return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

void solve(void) {
  string a, b, c, d; cin >> a >> b >> c >> d;
  if (leap(stoi(c))) mp2[2] = 29;
  b.pop_back();

  int ans = 0;
  for (int i=1; i<mp1[a]; i++) ans += mp2[i] * 1440;
  ans += (stoi(b) - 1) * 1440;
  ans += stoi(d.substr(0, 2)) * 60 + stoi(d.substr(3, 2));

  int tot = (leap(stoi(c)) ? 366 : 365) * 1440;

  cout << fixed << setprecision(10) << (double)ans / tot * 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}