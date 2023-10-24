def Palindromic_Array(arr, n):
    count = 0
    for i in range(0, n):
        a = str(arr[i])
        if a == a[::-1]:
            count += 1
    if count == n:
        return "YES"
    else:
        return "NO"

arr1 = [121]
n1 = len(arr1)
result = Palindromic_Array(arr1,n1)
print("Array Palindromic: ",result)