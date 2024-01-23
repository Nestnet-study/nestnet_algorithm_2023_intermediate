def if_decimal(num):
    if num==1:
        return
    for i in range(2,int(num**0.5)+1):
        if num%i==0:
            return
    count.append(num)


m,n=map(int,input().split())
count=[]                             # 몇 개 해당하는지
for i in range(m,n+1): if_decimal(i) # m과 n사이에 숫자 하나씩 확인
print(*count)
