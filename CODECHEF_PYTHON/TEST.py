val = True
op =[]
while(val):
    p = int(input())
    if p ==42:
        p = int(input())
        val = False
    else:
        val = True
        op.append(p)
print(*op, sep="\n") #here the entries in the list will be printed in separate lines.
