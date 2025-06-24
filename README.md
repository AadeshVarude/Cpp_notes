# 📘 C++ Notes:

## 🔹 `set`

A `set` is an **associative container** that stores **unique elements** in a **sorted order** (by default, ascending). You can customize the sort order using a comparator.

### ✅ Key Features:
- Stores **unique** elements
- Maintains elements in **sorted order**
- Based on a **Red-Black Tree**
- **Fast** operations: insert, delete, search

### ⏱️ Time Complexities:

| Operation              | Time Complexity |
|------------------------|-----------------|
| Insert an element      | O(log n)        |
| Delete an element      | O(log n)        |
| Find element by value  | O(log n)        |
| Find largest element   | O(1) *(via `rbegin()`)* |
| Find smallest element  | O(1) *(via `begin()`)* |
| Traverse the set       | O(n)            |

> 📝 Tip: Use `set` when you need **ordered, unique elements**.

---

## 🔹 `unordered_set`

An `unordered_set` is an **unordered associative container** that also stores **unique elements**, but **does not maintain any order**.

### ✅ Key Features:
- Stores **unique** elements
- **No guaranteed order** of elements
- Based on **Hash Tables**
- Provides **average-case constant-time** operations

### ⏱️ Time Complexities (Average Case):

| Operation              | Time Complexity |
|------------------------|-----------------|
| Insert an element      | O(1)            |
| Delete an element      | O(1)            |
| Find element by value  | O(1)            |
| Traverse the set       | O(n)            |

> ⚠️ You **cannot access elements by position** because the internal order is not defined.

---

## 🔄 `set` vs `unordered_set` Comparison

| Feature                    | `set`                   | `unordered_set`         |
|----------------------------|--------------------------|--------------------------|
| Data structure             | Red-Black Tree           | Hash Table               |
| Order                      | Sorted                   | Unordered                |
| Duplicate elements         | ❌ No                    | ❌ No                    |
| Access by position         | ❌ Not allowed           | ❌ Not allowed           |
| Insert/Delete/Search       | O(log n)                 | O(1) (average)           |
| Use case                   | When order matters       | When performance matters |

---

