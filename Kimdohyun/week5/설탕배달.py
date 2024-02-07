N=int(input())

k=N//5
min_number=N
a,b=0,0
for i in range(k,-1,-1):
    if (N-5*i)%3==0:
        a=i
        b=(N-5*i)//3
    if min_number>a+b and(a>0 or b>0):
        min_number=a+b

if a==0 and b==0:print(-1)
else:print(min_number)