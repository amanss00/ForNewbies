def largest(arr, n):
    max = arr[0]
    for i in range(1, n):
        if arr[i] > max:
            max = arr[i]
    return max  

arr = [10, 27, 34, 78, 90]
n = len(arr)
Ans = largest(arr, n)
print("Largest element:", Ans)
