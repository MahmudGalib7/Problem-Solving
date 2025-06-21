def solve_line_intersection():
    a1, b1, c1 = map(int, input().split())
    a2, b2, c2 = map(int, input().split())
    
    det = a1 * b2 - a2 * b1
    
    if det != 0:
        x = (b1 * c2 - b2 * c1) / det
        y = (a2 * c1 - a1 * c2) / det
        
        if x == 0:
            x = 0.0
        if y == 0:
            y = 0.0
            
        print(f"{x:.6f} {y:.6f}")
    else:
        if (a1 * c2 - a2 * c1) == 0 and (b1 * c2 - b2 * c1) == 0:
            print("Infinite Intersections")
        else:
            print("Never Intersect")

if __name__ == "__main__":
    solve_line_intersection()