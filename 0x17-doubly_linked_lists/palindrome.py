#!/usr/bin/python3
def ispalindrome(n):
    string = str(n)
    return string == string[::-1]

array = []
for k in range(999, 99, -1):
    for l in range(k, 99, -1):
        if ispalindrome(k * l):
            array.append(k * l)
print(max(array))
