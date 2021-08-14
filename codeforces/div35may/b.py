n = int(input())
count = 0
while(n!=0):
    num = int(input())
    if(num<=9):
        print(num)
    else:    
        for i in range(1,num+1):
            if(len(set(str(i)))==1):
                count+=1
            else:
                pass
        print(count)        
        n-=1        