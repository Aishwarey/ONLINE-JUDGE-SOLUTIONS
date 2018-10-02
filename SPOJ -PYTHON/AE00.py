'''
the program finds the number of rectangles that can be made using a square of length 1.
in line 13, (inpt+1) is used because we have started the iteration from 1 and we need the iteration to include the certain value not exclude it.
'''
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
            fakt =fakt +1
print(fakt)
