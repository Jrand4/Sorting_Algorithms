import sys
A = [9,7,5,3,1,10,8,6,4,2]

for i in range(len(A)):
    min_idx = i
    for j in range(i+1,len(A)):
        if A[min_idx] > A[j]:
            min_idx = j
    A[i],A[min_idx] = A[min_idx],A[i]

for i in range(len(A)):
    print("%d" %A[i])
