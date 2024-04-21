#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  sort(s.begin(), s.end());

  return s == "123" || s == "456" || s == "789" || s == "147" || s == "258" || s == "369" || s == "058";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Unlocked" : "Locked");
  return 0;
}