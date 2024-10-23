#개수가 적게 잔돈
#1000엔 냈을 때 잔돈의 개수

n=1000-int(input())
coins = (500,100,50,10,5,1)
count =0
for coin in coins:
    count += n // coin
    n %= coin
print(count)