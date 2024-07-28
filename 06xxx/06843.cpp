#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  string a; getline(cin, a);
  string b; getline(cin, b);

  unordered_map<char, int> mp;
  for (char c : a) {
    if (c == ' ') continue;
    mp[c]++;
  }
  for (char c : b) {
    if (c == ' ') continue;
    mp[c]--;
  }

  for (auto [k, v] : mp) {
    if (v != 0) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Is an anagram." : "Is not an anagram.");
  return 0;
}