#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, vector<char>> mp = {
  {1, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'L', 'M'}},
  {2, {'A', 'C', 'E', 'F', 'G', 'H', 'I', 'L', 'M'}},
  {3, {'A', 'C', 'E', 'F', 'G', 'H', 'I', 'L', 'M'}},
  {4, {'A', 'B', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}},
  {5, {'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}},
  {6, {'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}},
  {7, {'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}},
  {8, {'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}},
  {9, {'A', 'C', 'E', 'F', 'G', 'H', 'L', 'M'}},
  {10, {'A', 'B', 'C', 'F', 'G', 'H', 'L', 'M'}}
};

void solve(void) {
  int n; cin >> n;

  cout << mp[n].size() << "\n";
  for (char c : mp[n]) cout << c << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}