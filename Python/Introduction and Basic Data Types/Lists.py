lt = []
for i in range(int(input())):
    ans = list(input().split())
    if ans[0] == 'insert': lt.insert(int(ans[1]), int(ans[2]))
    elif ans[0] == 'print': print(lt)
    elif ans[0] == 'remove': lt.remove(int(ans[1]))
    elif ans[0] == 'append': lt.append(int(ans[1]))
    elif ans[0] == 'sort': lt.sort()
    elif ans[0] == 'reverse': lt.reverse()    
    else: lt.pop() 
