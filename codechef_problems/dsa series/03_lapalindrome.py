for i in range(int(input())):
    s = input()
    if len(s)%2==0:
            mid=int(len(s)/2)
            l=s[0:mid]
            r=s[mid:int(len(s))]
            if sorted(l)==sorted(r):
                print("YES")
            else:
                print("NO")  
        
    elif(len(s)%2!=0):
            mid=int(len(s)/2)
            l=s[0:mid]
            r=s[mid+1:int(len(s))]
            if sorted(l)==sorted(r):
                print("YES")
            else:
                print("NO")