#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

inline string clean(const string &s) {
  string ret = "";
  for (const char &c : s) {
    if (isalnum(c)) ret += tolower(c);
  }
  return ret;
}

bool solve(void) {
  string r; getline(cin, r);
  string t; getline(cin, t);
  string d; getline(cin, d);
  string e; getline(cin, e);

  stringstream ssd(d), sse(e); string s1, s2;
  unordered_map<string, string> mp;
  while (ssd >> s1 && sse >> s2) mp[s1] = s2;

  stringstream ssr(r), sst(t);
  vector<string> rr, tt; string s;
  while (ssr >> s) {
    s = clean(s);
    if (!s.empty()) rr.push_back(s);
  }
  while (sst >> s) {
    s = clean(s);
    if (!s.empty()) tt.push_back(s);
  }
  if (rr.size() != tt.size()) return false;

  for (int i=0; i<rr.size(); i++) {
    if (mp[tt[i]] != rr[i]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "STONECOAL" : "VALID");
  return 0;
}