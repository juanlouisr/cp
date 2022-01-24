arr = [21,6,1,11,21,20,27]

for i in range(len(arr)-1):
    for j in range(len(arr)-1):
        if (arr[j] > arr[j+1]):
            arr[j+1], arr[j] = arr[j], arr[j+1]


for i in range(len(arr)):
    print(arr[i],end=" ")
