
---

### Problem: Archery Arena

Alice is playing the popular Google Doodle Champion Island game, and she is facing off against the archery master Yoichi. The arena is filled with targets and wood logs placed at different coordinates on a one-dimensional plane.

Alice is an excellent archer — she can hit every target perfectly. However, if she accidentally shoots a wood log, it will explode and destroy all targets within the width range \[l, r\] of the log. These destroyed targets do not earn her any points.

To save her energy, Alice decides to only shoot the targets and avoid shooting any logs. For example, in the above picture, Alice can avoid shooting any targets that fall within the width of any log, thus gaining 3 points. Can you determine how many points Alice can earn by the end of the match given targets and logs?

#### Input
- The first line contains two integers `n`, `m` — the number of targets, the number of logs (`1 ≤ n, m ≤ 10^5`).
- The second line contains the coordinates `x_i` of the `i`-th target in increasing order (`1 ≤ x_i ≤ 10^9`).
- The next `m` lines each contain two integers `l_j` and `r_j`, the start and end of the `j`-th horizontal log (`1 ≤ l_j, r_j ≤ 10^9`).
  - The logs are given in increasing order of `l_j` and might overlap with each other.

#### Output
Print a single integer — how many points Alice can earn.

#### Sample Input
6 3
1 3 5 6 8 9
2 4
3 5
7 8


#### Sample Output

3
