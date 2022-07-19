#백준 2562
a=list()
for i in range(9):
    a.append(int(input()))
idx=max(a)
print(idx)
print(int(a.index(idx))+1)