lt, ans = [], []
for i in range(int(input())):
    st, val = input(), float(input())
    lt.append([val, st])
                
lt.sort();

for i in lt[1:]:
    if i[0] != lt[0][0] and len(ans) == 0: ans.append(i)
    elif len(ans) > 0 and ans[0][0] == i[0]: ans.append(i)
    
ans.sort()
for x in ans: print(x[1])