#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<int, string> mp = {
  {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"},
  {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"},
  {11, "eleven"}, {12, "twelve"}, {13, "thirteen"},
  {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"},
  {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"},
  {20, "twenty"}, {30, "thirty"}, {40, "forty"}, {50, "fifty"},
  {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}
};

void calc(int x) {
  if (x / 100) {
    cout << mp[x / 100] << " hundred";
    if (x % 100) cout << " and ";
  }
  if (x % 100 < 20) {
    cout << mp[x % 100];
  } else {
    if ((x % 100) / 10) {
      cout << mp[(x % 100) / 10 * 10];
      if (x % 10) cout << "-";
    }
    if (x % 10) cout << mp[x % 10];
  }
}

bool solve(void) {
  int n; cin >> n;
  if (n < 0) return false;

  if (n == 0) {
    cout << "zero\n";
    return true;
  }

  if (n / 1000000) {
    calc(n / 1000000);
    cout << " million";
    if (n % 1000000) {
      if ((n % 1000000) / 1000 || n % 1000 >= 100) cout << ", ";
      else cout << " and ";
    }
  }
  if ((n % 1000000) / 1000) {
    calc((n % 1000000) / 1000);
    cout << " thousand";
    if (n % 1000) {
      if (n % 1000 >= 100) cout << ", ";
      else cout << " and ";
    }
  }
  if (n % 1000) {
    calc(n % 1000);
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}