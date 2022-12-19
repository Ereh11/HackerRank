input(); lt = list(map(int, input().split()))
lt.sort(reverse = True); se = set(lt); se.remove(lt[0]);
lt = list(se); lt.sort()
print(lt[-1])