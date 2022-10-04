import math
import operator, string

stack = []

operations = {'+': operator.add, '-': operator.sub, '*': operator.mul, '/': operator.truediv, 'sqrt': math.sqrt}

stack.append('3.12')
stack.append('4')
stack.append('+')
stack.append('2')
stack.append('*')

print('Initial stack')
print(stack)
sk = []

for i in stack:
    if i in operations:
        a = sk.pop()
        if i == 'sqrt':
            c = operations[i](a)
        else: 
            b = sk.pop()
            c = operations[i](b,a)
    else:
        c = float(i)
    sk.append(c)
print(sk)
