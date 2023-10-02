def binary_search(array,target):
    left = 0
    right = len(array) -1


    while(left<=right):
        mid = (left+right)//2

        if array[mid] == target:
            return mid
        elif array[mid] < target:
            left = mid+1
        else:
            right = mid-1


arr = [1,2,5,7,8,9]
result = binary_search(arr,7)
print(result)
