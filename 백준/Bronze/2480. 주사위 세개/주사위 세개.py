dice = list(map(int,input().split()))
for i in dice:
    diceCount=dice.count(i)
    
    if diceCount==3:
        result=10000+dice[0]*1000
        break
        
    elif diceCount==2:
        dice.sort()
        result=1000+dice[1]*100
        break
        
    elif diceCount==1:
        dice.sort()
        result=dice[-1]*100
        
print(result)