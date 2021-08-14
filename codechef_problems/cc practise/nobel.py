t = int(input())
while(t!=0):
    N,M=map(int,input().split())
    x=list(map(int, input().split()))
    compare = list(range(1,int(M)+1,1))
    if(set(x)==set(compare)):
        print("No")
    else:
        print("Yes")
    t-=1        