n=int(input())
num = n
counT =0
while True:
    a=num//10 #첫번째 계산 첫번째자릿수
    b=num%10 #첫번째 계산 두번째자릿수
    x=(a+b)%10 #두번째계산 두번째자릿수
    num = (b*10)+x #첫번째 계산 두번째 자릿수를 첫번째자릿수로 변경 후 다음계산의 두번째자릿수 추가(반복을 위해 num에 저장)
    counT+=1
    if num==n:
        break
print(counT)
    
    