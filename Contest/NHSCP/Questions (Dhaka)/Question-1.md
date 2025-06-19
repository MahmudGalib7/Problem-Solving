### Problem: Minimum Number of Teams

There are **N** cities, numbered from 1 to **N**. From each city, a competitive programmer has come to the national programming camp for rigorous training. Rukaiya is forming teams for this camp.

You are given **M** facts that *"there is a road connecting city Ai and city Bi."* The same road information may be given multiple times.

If there is a road between **A and B**, and between **B and C**, then we consider **A and C** as connected cities as well. There is no city connection information that cannot be derived from the **M** given facts.

Rukaiya wants to form teams such that:

- No two programmers in the same team are from **connected cities**.
- The **total number of teams is minimized**.

#### Input
- Two integers `N` and `M`  
- `M` pairs of integers `Ai Bi` denoting a road between cities `Ai` and `Bi`.

#### Constraints
- `2 <= N <= 200,000`
- `0 <= M <= 200,000`
- `1 <= Ai, Bi <= N`
- `Ai != Bi`

#### Output
Print the **minimum number of teams** that Rukaiya will form.

#### Sample Input
5 2
1 2
3 4

#### Sample Output
2
