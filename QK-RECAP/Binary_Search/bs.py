def binary_Search(arr, target):
    low = 0
    high = len(arr)-1
    while (low <= high):
        mid = (low+high)//2
        if arr[mid] == target:
            return mid
        elif arr[mid] > target:
            high = mid-1
        else:
            low = mid+1
    return -1


arr = [1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8]
print(binary_Search(arr, 6))
