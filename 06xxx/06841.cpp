#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  map<string, string> mp = {
    {"CU", "see you"},
    {":-)", "I’m happy"},
    {":-()", "I’m unhappy"},
    {";-)", "wink"},
    {":-P", "stick out my tongue"},
    {"(~.~)", "sleepy"},
    {"TA", "totally awesome"},
    {"CCC", "Canadian Computing Competition"},
    {"CUZ", "because"},
    {"TY", "thank-you"},
    {"YW", "you’re welcome"},
    {"TTYL", "talk to you later"}
  };

  string s;
  while (cin >> s) {
    cout << (mp.find(s) == mp.end() ? s : mp[s]) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}