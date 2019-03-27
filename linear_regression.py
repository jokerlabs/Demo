import matplotlib.pyplot as plt
import numpy as np
from sklearn import datasets, linear_model, discriminant_analysis
from sklearn.model_selection import train_test_split

def load_data():
    diabetes = datasets.load_diabetes()
    X = diabetes.data
    print(type(X))
    print(X.shape)
    Y = diabetes.target
    return train_test_split(X, Y, test_size=0.25, random_state=0)

def test_LinearRegression(*data):
    X_train, X_test, y_train, y_test = data
    #通过sklearn的linear_model创建线性回归对象
    linearRegression = linear_model.LinearRegression()
    #进行训练
    linearRegression.fit(X_train, y_train)
    #通过LinearRegression的coef_属性获得权重向量,intercept_获得b的值
    print("权重向量:%s, b的值为:%.2f" % (linearRegression.coef_, linearRegression.intercept_))
    #计算出损失函数的值
    print("损失函数的值: %.2f" % np.mean((linearRegression.predict(X_test) - y_test) ** 2))
    #计算预测性能得分
    print("预测性能得分: %.2f" % linearRegression.score(X_test, y_test))

if __name__ == '__main__':
    #获得数据集
    X_train, X_test, y_train, y_test = load_data()
    #进行训练并且输出预测结果
    test_LinearRegression(X_train, X_test, y_train, y_test)