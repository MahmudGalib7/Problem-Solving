
---

### Problem: The Curious Intersection

Nafis, the mathematician, has two equations of straight lines, and he is curious to know if they intersect. If they do, he wants to find the exact point of intersection. If they never intersect, he wants you to report it.

#### Input
Two equations of the lines are provided in the standard form:

- Line 1: `a₁x + b₁y + c₁ = 0`
- Line 2: `a₂x + b₂y + c₂ = 0`

The coefficients `a₁`, `b₁`, `c₁`, `a₂`, `b₂` and `c₂​` are integers and −10^6 ≤ a₁, b₁, c₁, a₂, b₂, c₂ ≤ 10^6.

#### Output
- If the lines intersect, print the point of intersection `(x, y)` as floating-point values rounded to **6 decimal places**.
- If the lines are **parallel and never intersect**, print `Never Intersect`.
- If the lines are **coincident** (infinitely many intersections), print `Infinite Intersections`.

#### Sample Input

2 3 -4
4 -6 8

#### Sample Output

0.000000 1.333333


#### Explanation
The two lines intersect at (0.000000, 1.333333).



