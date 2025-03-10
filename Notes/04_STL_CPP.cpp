# C++ STL Notes

## 1. Introduction
The **Standard Template Library (STL)** in C++ provides pre-built data structures and algorithms, making coding efficient.
It makees C++ code efficient and reduces code complexity.

It has four main components:
- **Containers** – Store data (`vector`, `list`, `set`, `map`, etc.).
- **Iterators** – Traverse elements in containers.
- **Algorithms** – Sorting, Searching, etc.
- **Function Objects (Functors)** – Functions inside objects.

---
#include <bits/stdc++.h>
using namespace std;


## **PAIRS**
void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}
// Output:
// 1 3
// 1 4 3
// 5

## **VECTORS**
void explainVectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // push_back and emplace_back works the same
    // but generally emplace_back is faster than push_back()
    
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());
    
    cout << "Vector elements: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}
// Output:
// Vector elements: 50 50 1 2

void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    cout << st.top();
    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5;
    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();
}

void explainPQ()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout << pq.top();
    pq.pop();
    cout << pq.top();

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);
    min_pq.push(2);
    min_pq.push(8);
    min_pq.emplace(10);
    cout << min_pq.top();
}

void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(4);
    st.insert(3);
    auto it = st.find(3);
    st.erase(5);
    int cnt = st.count(1);
    st.erase(it);
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1);
    int cnt = ms.count(1);
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(2));
}

void explainUSet()
{
    unordered_set<int> st;
}

void explainMap()
{
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    auto it = mpp.find(3);
}

void explainMultimap()
{
}

void explainUnorderedMap()
{
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    return p1.first > p2.first;
}

void explainExtra()
{
    int num = 7;
    int cnt = __builtin_popcount(num);
    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2);
    string s = "123";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

int main()
{
    explainPairs();
    explainVectors();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultimap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}
