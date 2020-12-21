def countSetBits(n): 
    count = 0
    while (n): 
        count += n & 1
        n >>= 1
    return count

no=int(input())

for i in range(no):
    i=int(input())
    ch=1;
    for r in range(1,i):
        j=countSetBits(r);
        
        if r+j==i:
            print("Colleges will not open")
            break
            ch=0;
    if ch==1:
        print("Colleges will open")