word = input()

def find_ans(word):
    return word == word[::-1]

if find_ans(word):
    print(1)
else:
    print(0)