import numpy as np
a=[1,2,3]
b=[2,4,5]
c=[2,7,8]
d=[9,8,3]
x=np.vstack((a,b,c,d))
y = np.array((a, b, c, d))
print(x)
print(y)
print(np.cov(x))
print(np.cov(a,b))
print(np.corrcoef(x))
print(np.corrcoef(y))