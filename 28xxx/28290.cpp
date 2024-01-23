#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (s == "fdsajkl;" || s == "jkl;fdsa") cout << "in-out";
  else if (s == "asdf;lkj" || s == ";lkjasdf") cout << "out-in";
  else if (s == "asdfjkl;") cout << "stairs";
  else if (s == ";lkjfdsa") cout << "reverse";
  else cout << "molu";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}