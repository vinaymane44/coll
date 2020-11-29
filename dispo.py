def extract():
    lis=[]
    for i in range(623):
        a=input()
        if(a[-3:-1]=="xx"):
            #lis.append(a[:-2])
            lis.append(a[0:-3])
    
    print(lis)

def pri(l):
    for i in l:
        print(i)


extract()   
