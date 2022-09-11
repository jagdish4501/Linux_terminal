import os
while 1:
    print("Hacker@001 :$", end=' ')
    l = list(input().split())
    cmd=""
    for x in l:
        cmd+=x+" "
    ret_val=os.system(cmd)
    print(ret_val) #it ret_val=pid