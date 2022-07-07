h,m=map(int,input().split())
cookT=int(input())
total=h*60+m+cookT
if total>=1440:
    total-=1440
    print(total//60, total%60)
else:
    print(total//60, total%60)
