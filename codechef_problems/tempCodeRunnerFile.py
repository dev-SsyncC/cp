    for i in range(0,2**n):
        if i^(i+1)==(i+2)^(i+3):
            count+=1
    print(count%(1000000007))
    print("-------------------")