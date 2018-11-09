##variables y librerias
import matplotlib.pyplot as plt
import numpy as np
import math

##longitud de la caja 
long=10 


V1=np.zeros([10,10])
x=np.random.rand(10)
y=np.random.rand(10)
z=np.array([x,y])
print (len(z))
plt.scatter(x,y)

b=0
cx = np.zeros(130)
cy = np.zeros(130)

for f in range(0,10,2):
    for i in range(0,360,10):
        cx[b] = np.cos(i)*.05 + x[f]
        cy[b] = np.sin(i)*.05 + y[f]
        b=b+1
b=0

plt.scatter(cx,cy)

