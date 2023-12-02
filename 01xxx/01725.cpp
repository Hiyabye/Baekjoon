#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class SegmentTree {
private:
  int n, h, sz;
  vector<int> arr;
  vector<int> tree;

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = start;
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = arr[tree[node*2]] < arr[tree[node*2+1]] ? tree[node*2] : tree[node*2+1];
    }
  }

  int minIdx(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return -1;
    if (left <= start && end <= right) return tree[node];
    int lval = minIdx(node*2, start, (start+end)/2, left, right);
    int rval = minIdx(node*2+1, (start+end)/2+1, end, left, right);
    if (lval == -1) return rval;
    if (rval == -1) return lval;
    return arr[lval] < arr[rval] ? lval : rval;
  }

public:
  SegmentTree(vector<int> &arr) : arr(arr) {
    this->n = arr.size();
    this->h = (int)ceil(log2(n));
    this->sz = (1 << (h+1));
    this->tree.resize(sz);
    init(1, 0, n-1);
  }

  int query(int start, int end) {
    if (start > end) return 0;
    int idx = minIdx(1, 0, n-1, start, end);
    int area = arr[idx]*(end-start+1);
    int lArea = query(start, idx-1);
    int rArea = query(idx+1, end);
    return max(area, max(lArea, rArea));
  }
};

void solve(void) {
  int n; cin >> n;
  vector<int> arr(n);
  for (int i=0; i<n; i++) cin >> arr[i];
  SegmentTree st(arr);

  cout << st.query(0, n-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}