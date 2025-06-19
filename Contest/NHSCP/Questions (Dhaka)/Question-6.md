### Problem: The Magic Potion Quest

In the Kingdom of Alzoria, a young wizard named Arin needs to create a magic potion to save his village from an eternal winter. The potion requires exactly **N** units of magical essence, which can be gathered from enchanted flowers scattered throughout the forest.

There are **K** pieces of flowers of each type. You can use at most **K** flowers of a specific type. Each type of flower has a unique essence value, and some flowers may not work together (due to magical interference).

You must help Arin determine if it is possible to collect a subset of flowers whose total essence is exactly **N**.

#### Input

- The first line contains an integer **T** — the number of test cases.

For each test case:

- A single integer **N** — the target essence value.
- Two integers **M** and **K** — the number of flower types and pieces of each type.
- A line of **M** integers — array **A** of size **M** representing the essence values of each flower type.

#### Constraints

- `1 ≤ T ≤ 10`
- `1 ≤ N ≤ 1000` (required essence value)
- `1 ≤ M ≤ 100` (number of flower types)
- `1 ≤ K ≤ 100000` (number of pieces per flower type)
- `1 ≤ A[i] ≤ 1000` (essence value of each flower type)

#### Output

For each test case, print **"YES"** if the exact essence can be collected, otherwise print **"NO"**.

#### Sample Input

2
20
4 3
1 3 5 9
7
3 1
2 4 6

#### Sample Output

YES
NO
