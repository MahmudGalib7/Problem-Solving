import math
import os
import random
import re
import sys

def hourglassSum(arr):
    evey_sum_hourglass_1 = []
    evey_sum_hourglass_2 = []
    evey_sum_hourglass_3 = []
    evey_sum_hourglass_4 = []

    for i in range(0,4, +1):

        line_sum_1 = arr[i +1][1]
        for j in range(0, 3, +1):
            line_sum_1 += arr[i][j] + arr[i+2][j]
        evey_sum_hourglass_1.append(line_sum_1)    

    for i in range(0,4, +1):

        line_sum_2 = arr[i +1][2]
        for j in range(1, 4, +1):
            line_sum_2 += arr[i][j] + arr[i+2][j]
        evey_sum_hourglass_2.append(line_sum_2)

    for i in range(0,4, +1):

        line_sum_3 = arr[i +1][3]
        for j in range(2, 5, +1):
            line_sum_3 += arr[i][j] + arr[i+2][j]
        evey_sum_hourglass_3.append(line_sum_3) 

    for i in range(0,4, +1):

        line_sum_4 = arr[i +1][4]
        for j in range(3, 6, +1):
            line_sum_4 += arr[i][j] + arr[i+2][j]
        evey_sum_hourglass_4.append(line_sum_4)   
    all_sum = evey_sum_hourglass_1 + evey_sum_hourglass_2 + evey_sum_hourglass_3 + evey_sum_hourglass_4
    max_sum = max(all_sum)
    return max_sum


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
