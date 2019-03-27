from sklearn.linear_model import LinearRegression
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
data=pd.read_csv('Advertising.csv')
y=data.loc[:, 'sales'].as_matrix(columns=None)
y=np.array([y]).T
#print(y)
x=data.drop('sales', 1)
x=x.loc[0:].as_matrix(columns=None)
#print(x)
l=LinearRegression()
l.fit(x,y)
print(l.coef_)
print(l.predict([[60,60,60]]))
print(l.score(x,y))
print(np.mean((l.predict(x)-y)**2))