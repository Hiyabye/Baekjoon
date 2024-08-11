#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp1 = {
  {"Ab", 11}, {"A", 0}, {"A#", 1}, {"Bb", 1}, {"B", 2}, {"B#", 3},
  {"Cb", 2}, {"C", 3}, {"C#", 4}, {"Db", 4}, {"D", 5}, {"D#", 6},
  {"Eb", 6}, {"E", 7}, {"E#", 8}, {"Fb", 7}, {"F", 8}, {"F#", 9},
  {"Gb", 9}, {"G", 10}, {"G#", 11}
};

unordered_map<int, string> mp2 = {
  {0, "A"}, {1, "A#"}, {2, "B"}, {3, "C"}, {4, "C#"}, {5, "D"},
  {6, "D#"}, {7, "E"}, {8, "F"}, {9, "F#"}, {10, "G"}, {11, "G#"}
};

bool solve(void) {
  string s; getline(cin, s);
  if (s == "***") return false;
  int n; cin >> n;
  cin.ignore();

  stringstream ss(s); string t;
  while (ss >> t) {
    int x = mp1[t];
    x = (x + 12 + n % 12) % 12;
    cout << mp2[x] << " ";
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