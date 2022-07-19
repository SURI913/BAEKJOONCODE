#백준 2577
#0~9까지
a=list()
for i in range(3):
    a.append(int(input()))
b=a[0]*a[1]*a[2]
c=list(map(int,str(b)))
for i in range(10):
    print(c.count(i))