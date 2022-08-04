
def createArray(count):
    i=count
    b=[]
    for j in range(count):
        b.append([j,i])
        j=j-1
    return b
    
def func(arr):
    normalRate=arr[0]
    premiumRate=arr[1]
    a=createArray(arr[2])
    print("\n")
    max1=[0,0]
    maxpremium=0
    
    for i in range(len[a]):
        
        if(a[i][0]*normalRate +a[i][1]*premiumRate <= arr[4]):
            if(maxpremium<a[i][1]):
                max1[0]=a[i][0]
                max1[1]=a[i][1]

    return max1

        

z=int(input())
for i in range(z):
    a = list(map(int, input().rstrip().split()))
    
    arr=func(a)
    print(f"{arr[0]} {arr[1]}")
#input format is  P(Normal) p(premium) N(target no of burgur) R(Money)