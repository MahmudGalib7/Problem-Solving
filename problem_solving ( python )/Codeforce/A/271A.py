def has_distinct_digits(year):
    year_str = str(year)
    return len(year_str) == len(set(year_str))


def find_next_distinct_year(year):
    year += 1
    while True:
        if has_distinct_digits(year):
            return year
        year += 1

year = int(input())
next_distinct = find_next_distinct_year(year)
print(next_distinct)
