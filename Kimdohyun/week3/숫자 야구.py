from itertools import permutations

n=int(input())
baseball=list(permutations([1,2,3,4,5,6,7,8,9],3))
num,s_len,b_len="",0,0

for _ in range(n):
    num,s_len,b_len=input().split()
    s_len,b_len=int(s_len),int(b_len)

    delete=[]
    for i in range(len(baseball)):
        s,b=0,0
        for j in range(3):
            if int(num[j]) in baseball[i]:
                if baseball[i][j]==int(num[j]):s+=1
                else:b+=1

        if s!=s_len or b!=b_len:delete.append(baseball[i])

    for ele in delete:baseball.remove(ele)

print(len(baseball))
