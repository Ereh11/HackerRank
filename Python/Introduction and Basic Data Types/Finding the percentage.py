ans = {}
for i in range(int(input())):
    lt = list(input().split())
    if lt[0] not in ans: ans[lt[0]] = 0
    
    for i in lt[1:]:
        ans[lt[0]] += float(i)
        
    ans[lt[0]] /= (len(lt) - 1)
    
print('%.2f' %ans[input()])