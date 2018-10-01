j= k= i=1
fakt = 0
inp = raw_input("enter the number")
inp = int(inp)
inpt= inp/2+1
#print(inpt)
if inp == 1:
    print('1')
for i in range(1,inpt+1):
    for j in range(i,inp+1):
        if(i*j<= inp):
            #print(i,j)
            fakt =fakt +1
print(fakt)
