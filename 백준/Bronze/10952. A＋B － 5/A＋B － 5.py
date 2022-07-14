sum=list()
while True:
    a, b=map(int, input().split())
    if a==0 and b==0:
        break
    else:
        sum.append(a+b)
for i in range(len(sum)):
    print(sum[i])
