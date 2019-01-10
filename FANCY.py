tc = int(input())
for pos in range (tc):
    s = input()
    arr = s.split(' ')
    k = False
    for x in arr:
        if x == "not":
            k = True
            print ("Real Fancy")
            break
    if k == False:
        print ("regularly fancy")
    if (!k):
        print(1)
