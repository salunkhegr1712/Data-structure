def pageCount(n, p):
    # Write your code here
    if(p==n or p==1 ):
        return 0
    else:
        j=p;i=0
        while (p!=0 or p!=1 or j!=n or j!=n-1):
            
            p=p-2
            j=j+2
            i+=1
        return i

pageCount(10,2)
