#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

template <typename T>
class SegmentTree {
private:
  vector<T> tree;
  vector<T> arr;
  int n;
  T (*func)(T, T);

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = arr[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = func(tree[node*2], tree[node*2+1]);
    }
  }

  T query(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return make_pair(1e9, 1e9);
    if (left <= start && end <= right) return tree[node];
    T lval = query(node*2, start, (start+end)/2, left, right);
    T rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return func(lval, rval);
  }

  void update(int node, int start, int end, int index, T val) {
    if (index < start || index > end) return;
    if (start == end) {
      arr[index] = val;
      tree[node] = val;
      return;
    }
    update(node*2, start, (start+end)/2, index, val);
    update(node*2+1, (start+end)/2+1, end, index, val);
    tree[node] = func(tree[node*2], tree[node*2+1]);
  }

public:
  SegmentTree(vector<T> &arr, T (*f)(T, T)) : arr(arr), func(f) {
    n = arr.size();
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    tree.resize(tree_size);
    init(1, 0, n-1);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }

  void update(int index, T val) {
    update(1, 0, n-1, index, val);
  }
};

pair<int, int> min_pair(pair<int, int> a, pair<int, int> b) {
  if (a.first == b.first) return a.second < b.second ? a : b;
  return a.first < b.first ? a : b;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int> > a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i].first;
    a[i].second = i+1;
  }
  SegmentTree<pair<int, int> > st(a, min_pair);

  int m; cin >> m;
  while (m--) {
    int cmd; cin >> cmd;
    if (cmd == 1) {
      int i, v; cin >> i >> v;
      st.update(i-1, make_pair(v, i));
    } else if (cmd == 2) {
      cout << st.query(0, n-1).second << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}