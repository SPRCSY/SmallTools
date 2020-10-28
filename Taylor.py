#计算泰勒展开
from sympy import *

x=symbols('x')
f=eval(input("输入f(x)："))
try:
    x0=float(input("输入x0："))
    n=int(input("输入n："))
except:
    n=5
    x0=0

def Taylor():
    y=0
    ys=0
    for i in range(n+1):
        y+=diff(f,x,i).evalf(subs={'x': x0}) *(x-x0)**i/factorial(i)
        ys+=diff(f,x,i) *(x-x0)**i/factorial(i)
    return y,ys

print(f,'的',n,'阶泰勒展开是：',Taylor()[1],"\n",Taylor()[0])