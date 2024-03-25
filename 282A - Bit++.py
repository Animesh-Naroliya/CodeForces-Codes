operation = int(input())
count = 0
x =[]
for i in range(0,operation):
    x.append(input())
    if x[i] == "++X" or x[i] == "X++":
        count = count+ 1
    if x[i] == "--X" or x[i] == "X--":
        count= count - 1
 
print(count)