x = int(input())
if (x & 1) or (not(x & 1) and (x >= 6 and x<=20)): print('Weird')
else: print('Not Weird')