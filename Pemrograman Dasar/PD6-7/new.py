print( "0  1  2  3  4  5  6  7  8  9  10\n",end="")
for i in range(1, 11):
    print(i,end="")  
    if i >= 10:
        print(" ", end="")
    else:
        print("  ", end="")
    for j in range(1, 11):
        print(j*i, end="")
        if j*i >= 10:
            print(" ", end="")
        else: 
            print("  ", end="")
    print("\n", end="")