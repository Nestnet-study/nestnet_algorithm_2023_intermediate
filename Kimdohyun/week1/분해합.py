n=int(input())

for i in range(1,n+2):
    tmp,tmp_sum=str(i),0
    for j in range(len(tmp)):tmp_sum+=int(tmp[j])       #각 자리수 더하기
    tmp_sum+=i          #입력받은 숫자를 더하기
    if tmp_sum==n:break     #생성자인 경우

if i>n:print(0)     #생성자가 없는 경우 예외처리
else:print(i)