#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int v1 = distance(a.begin(), find_if(a.begin()+1, a.end(), vowel));
  int v2 = b.length() - 1 - distance(b.rbegin(), find_if(b.rbegin()+1, b.rend(), vowel));

  if (v1 == a.length() && v2 == -1) {
    cout << a << 'o' << b;
  } else if (v1 == a.length()) {
    cout << a << b.substr(v2);
  } else if (v2 == -1) {
    cout << a.substr(0, v1+1) << b;
  } else {
    cout << a.substr(0, v1) << b.substr(v2);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}