import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from pandas import Series, DataFrame
# 通过sklearn.linemodel加载岭回归方法
from sklearn import linear_model
# 通过sklearn.preprocessing加载PolynomialFeatures用于创建多项式特征，如ab, a^2, b^2
from sklearn.preprocessing import PolynomialFeatures

data_train = np.loadtxt('zhengqi_train.txt', delimiter='\t', skiprows=1)
x_train = data_train[:, 0:-1]
y_train = data_train[:, -1]
data_test = np.loadtxt('zhengqi_test.txt', delimiter='\t', skiprows=1)
x_test = data_test[:, 0:-1]
y_test = data_test[:, -1]
print(x_train[:,0].shape)
print(y_train.shape)

#通过sklearn的linear_model创建线性回归对象
linearRegression = linear_model.LinearRegression()
#进行训练
linearRegression.fit(x_train, y_train)
#通过LinearRegression的coef_属性获得权重向量,intercept_获得b的值
print("权重向量:%s, b的值为:%.2f" % (linearRegression.coef_, linearRegression.intercept_))
#计算出损失函数的值
print("损失函数的值: %.2f" % np.mean((linearRegression.predict(x_test) - y_test) ** 2))
#计算预测性能得分
print("预测性能得分: %.2f" % linearRegression.score(x_test, y_test))