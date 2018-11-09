import numpy as np
import matplotlib.pyplot as plt
##%matpltlib<inline
x=np.linspace(0,10,10)
y1=x**2
y2=x**(3./2)
plt.plot(x,y1,label="$x^2$")
plt.plot(x,y2,label="$x^{3./2}$")
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()

