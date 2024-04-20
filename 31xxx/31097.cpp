#include <iostream>
#include <string>
using namespace std;

typedef struct {
  int m, d;
} Date;

int cmp(const Date &a, const Date &b) {
  if (a.m < b.m) return 1;
  if (a.m > b.m) return -1;
  if (a.d < b.d) return 1;
  if (a.d > b.d) return -1;
  return 0;
}

void solve(void) {
  string s; cin >> s;
  Date cur = {stoi(s.substr(5, 2)), stoi(s.substr(8, 2))};

  Date a[12] = {
    {1, 20}, {2, 19}, {3, 21}, {4, 20},
    {5, 21}, {6, 21}, {7, 23}, {8, 23},
    {9, 23}, {10, 23}, {11, 23}, {12, 22}
  };

  string b[12] = {
    "Capricorn", "Aquarius", "Pisces", "Aries",
    "Taurus", "Gemini", "Cancer", "Leo",
    "Virgo", "Libra", "Scorpio", "Sagittarius"
  };

  for (int i=0; i<12; i++) {
    if (cmp(cur, a[i]) == 1) {
      cout << b[i];
      return;
    }
  }
  cout << b[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}