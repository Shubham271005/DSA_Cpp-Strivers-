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

## 2. Containers

### (i) Sequence Containers (Linear Storage)
- `vector` – Dynamic array, fast access (`O(1)`).
- `list` – Doubly Linked List, efficient insertions (`O(1)`).
- `deque` – Double-ended queue.
- `array` – Fixed-size array.
- `forward_list` – Singly Linked List.

```cpp
vector<int> v = {1, 2, 3};  
v.push_back(4);  
v.pop_back();  
cout << v[0];  
```

### (ii) Associative Containers (Sorted, Unique Keys)
- `set` – Stores unique elements in sorted order.
- `map` – Key-value pairs (sorted).
- `multiset` – Allows duplicate keys.
- `multimap` – Key-value pairs (duplicates allowed).

```cpp
map<int, string> mp;  
mp[1] = "Alice";  
mp[2] = "Bob";  
cout << mp[1];  // Output: Alice  
```

### (iii) Unordered Containers (Faster Lookup, Unsorted)
- `unordered_set` – Unique elements, fast lookup (`O(1)`).  
- `unordered_map` – Key-value pairs, fast lookup (`O(1)`).

---

## 3. Iterators
Used to **traverse containers** in STL.

```cpp
vector<int> v = {10, 20, 30};  
vector<int>::iterator it = v.begin();  
cout << *it;  // Output: 10  
```

---

## 4. Algorithms
Some useful STL algorithms:
- **Sorting:** `sort(v.begin(), v.end())`
- **Reversing:** `reverse(v.begin(), v.end())`
- **Binary Search:** `binary_search(v.begin(), v.end(), key)`
- **Lower Bound:** `lower_bound(v.begin(), v.end(), key)`
- **Sum of Elements:** `accumulate(v.begin(), v.end(), 0)`

```cpp
vector<int> v = {3, 1, 4, 2};  
sort(v.begin(), v.end());  
```

---

## 5. Priority Queue (Heap)

### Max Heap
```cpp
priority_queue<int> pq;
pq.push(10);
pq.push(20);
cout << pq.top();  // Output: 20  
```

### Min Heap
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(10);
pq.push(20);
cout << pq.top();  // Output: 10  
```

---

## 6. Stack & Queue

### Stack (LIFO)
```cpp
stack<int> st;  
st.push(10);  
cout << st.top();  // Output: 10  
```

### Queue (FIFO)
```cpp
queue<int> q;  
q.push(10);  
cout << q.front();  // Output: 10  
```

### Deque (Double-ended Queue)
```cpp
deque<int> dq;  
dq.push_back(10);  
dq.push_front(20);  
dq.pop_front();  
```

---

## Conclusion
C++ STL simplifies coding by providing **efficient, optimized** data structures and algorithms. 

