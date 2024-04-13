#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, string> mp = {
  {'a', "aespa"}, {'b', "baekjoon"}, {'c', "cau"}, {'d', "debug"},
  {'e', "edge"}, {'f', "firefox"}, {'g', "golang"}, {'h', "haegang"},
  {'i', "iu"}, {'j', "java"}, {'k', "kotlin"}, {'l', "lol"},
  {'m', "mips"}, {'n', "null"}, {'o', "os"}, {'p', "python"},
  {'q', "query"}, {'r', "roka"}, {'s', "solvedac"}, {'t', "tod"},
  {'u', "unix"}, {'v', "virus"}, {'w', "whale"}, {'x', "xcode"},
  {'y', "yahoo"}, {'z', "zebra"}
};

bool solve(void) {
  string s; cin >> s;

  string ans = "";
  for (int i=0; i<s.length(); i++) {
    if (s.substr(i, mp[s[i]].length()) != mp[s[i]]) return false;
    ans += s[i];
    i += mp[s[i]].length() - 1;
  }

  cout << "It's HG!\n" << ans;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "" : "ERROR!");
  return 0;
}