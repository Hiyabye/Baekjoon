#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, char> mp = {
  {'1', '`'}, {'2', '1'}, {'3', '2'}, {'4', '3'}, {'5', '4'},
  {'6', '5'}, {'7', '6'}, {'8', '7'}, {'9', '8'}, {'0', '9'},
  {'-', '0'}, {'=', '-'}, {'W', 'Q'}, {'E', 'W'}, {'R', 'E'},
  {'T', 'R'}, {'Y', 'T'}, {'U', 'Y'}, {'I', 'U'}, {'O', 'I'},
  {'P', 'O'}, {'[', 'P'}, {']', '['}, {'\\', ']'}, {'S', 'A'},
  {'D', 'S'}, {'F', 'D'}, {'G', 'F'}, {'H', 'G'}, {'J', 'H'},
  {'K', 'J'}, {'L', 'K'}, {';', 'L'}, {'\'', ';'}, {'X', 'Z'},
  {'C', 'X'}, {'V', 'C'}, {'B', 'V'}, {'N', 'B'}, {'M', 'N'},
  {',', 'M'}, {'.', ','}, {'/', '.'}, {' ', ' '}
};

void solve(void) {
  string s;
  while (getline(cin, s)) {
    for (char c : s) {
      cout << (mp.count(c) ? mp[c] : c);
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}