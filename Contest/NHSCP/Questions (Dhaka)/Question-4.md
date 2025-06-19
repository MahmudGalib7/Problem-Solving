#### Explanation
The two lines intersect at (0.000000, 1.333333).

---

### Problem: Place the BOOTHS

In a rural region of Bangladesh, there are **n** villages lined up along a single road, each at a unit distance from the next. Due to political unrest, the Election Commission wants to build election booths in some of these villages such that:

- Every village must either have a booth or be directly adjacent (left or right) to a village that has one.
- Building a booth costs money, so the Commission wants to use as few booths as possible.

You are given a binary string of length **n**, where the i-th character is `'1'` if village `i` already has a booth, and `'0'` otherwise. You are allowed to add booths in some villages (`'0'` only), and your task is to compute the **minimum number of additional booths** needed to ensure every village is covered (either directly or through adjacency).

#### Input
- First line: Integer `t` — number of test cases (1 ≤ t ≤ 10⁴)
- Next `t` lines: Each line contains a binary string `s` (1 ≤ |s| ≤ 10⁵)
- It is guaranteed that the total length of all strings does not exceed 2×10⁵.

#### Output
For each test case, output a single integer — the minimum number of booths that must be added.

#### Sample Input

3
000
101
10001

#### Sample Output

1
0
1

#### Explanation
- `000`: All villages are uncovered. You can place 1 booth at position 1 (center), covering 0, 1, and 2.
- `101`: Already covered.
- `10001`: Place 1 booth at position 2 to cover villages 1, 2, and 3.

