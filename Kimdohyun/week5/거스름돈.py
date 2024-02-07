cost=int(input())
cost=1000-cost
result=0

def calculate(value):
    global cost,result
    if cost>=value:
        result+=cost//value
        cost-=value*(cost//value)


for ele in [500,100,50,10,5,1]:calculate(ele)

print(result)
