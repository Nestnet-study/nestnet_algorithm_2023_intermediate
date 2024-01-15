word = input()
end = len(word)
start = 0

while start <= end:
    if word[start] != word[end-1]:
        print(0)
        break
    else:
        start += 1
        end -= 1

if end <= start:
    print(1)


# Better code

# palindrome = input()

# if palindrome[::1] == palindrome[::-1]:
#     print(1)
# else:
#     print(0)