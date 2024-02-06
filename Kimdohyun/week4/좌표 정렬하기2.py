n=int(input())
arr=[]
for i in range(n):arr.append(list(map(int,input().split())))
result=sorted(arr,key=lambda x:(x[1],x[0]))
for ele in result:print(*ele)