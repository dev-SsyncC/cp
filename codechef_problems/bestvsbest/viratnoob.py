t = int(input())
while(t!=0):
    n = int(input())
    ans = list(bin(n))
    print(ans.count("1"))
    t-=1