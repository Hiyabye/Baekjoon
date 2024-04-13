#include <iostream>
#include <string>
#include <vector>
using namespace std;

string num[10][5] = {
  {"###", "#.#", "#.#", "#.#", "###"},
  {"..#", "..#", "..#", "..#", "..#"},
  {"###", "..#", "###", "#..", "###"},
  {"###", "..#", "###", "..#", "###"},
  {"#.#", "#.#", "###", "..#", "..#"},
  {"###", "#..", "###", "..#", "###"},
  {"###", "#..", "###", "#.#", "###"},
  {"###", "..#", "..#", "..#", "..#"},
  {"###", "#.#", "###", "#.#", "###"},
  {"###", "#.#", "###", "..#", "###"}
};

bool check(const vector<string> &d, int n) {
  for (int i=0; i<5; i++) for (int j=0; j<3; j++) {
    if (num[n][i][j] == '.' && d[i][j] == '#') return false;
  }
  return true;
}

int calc(const vector<string> &v, int n) {
  vector<string> d(5);
  for (int i=0; i<5; i++) d[i] = v[i].substr(n*4, 3);
  for (int i=0; i<10; i++) if (check(d, i)) return i;
  return -1;
}

void solve(void) {
  vector<string> v(5);
  for (int i=0; i<5; i++) getline(cin, v[i]);

  cout << calc(v, 0) << calc(v, 1) << ":" << calc(v, 2) << calc(v, 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}