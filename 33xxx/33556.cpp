#include <cctype>
#include <iostream>
#include <string>
using namespace std;

inline bool check(string a, string b) {
  for (char &c : a) if (isupper(c)) c = tolower(c);
  for (char &c : b) if (isupper(c)) c = tolower(c);
  return a == b;
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;
  if (a == "null") a.clear();
  if (b == "null") b.clear();

  if (a.empty()) {
    cout << "NullPointerException\nNullPointerException";
  } else {
    cout << (a == b ? "true" : "false") << "\n";
    cout << (check(a, b) ? "true" : "false");
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}