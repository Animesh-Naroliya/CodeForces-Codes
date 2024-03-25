n = int(input())
stR= []
 
for i in range(0,n):
    stR.append(input())
for i in stR:
    if len(i)<=10:
        print(i)   
    else:
        print(i[0]+str(len(i)-2)+i[-1])