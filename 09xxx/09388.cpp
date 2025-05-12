#include <iostream>
#include <string>
using namespace std;

inline string caps(const string &s) {
  string t = "";
  for (char c : s) {
    if ('A' <= c && c <= 'Z') t += (char)(c - 'A' + 'a');
    else if ('a' <= c && c <= 'z') t += (char)(c - 'a' + 'A');
    else t += c;
  }
  return t;
}

inline string num(const string &s) {
  string t = "";
  for (char c : s) {
    if ('0' <= c && c <= '9') continue;
    else t += c;
  }
  return t;
}

void solve(int idx) {
  string a, b; cin >> a >> b;

  cout << "Case " << idx << ": ";
  if (a == b) cout << "Login successful.";
  else if (a == caps(b)) cout << "Wrong password. Please, check your caps lock key.";
  else if (num(a) == b) cout << "Wrong password. Please, check your num lock key.";
  else if (num(a) == caps(b)) cout << "Wrong password. Please, check your caps lock and num lock keys.";
  else cout << "Wrong password.";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}