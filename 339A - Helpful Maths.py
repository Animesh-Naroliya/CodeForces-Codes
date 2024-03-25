s = input()
 
number = [int(x) for x in s.split('+')]
 
number.sort()
 
new_sum = '+'.join(str(x) for x in number )
 
print(new_sum)