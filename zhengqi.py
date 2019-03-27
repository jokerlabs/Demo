

#                        .::::.
#                      .::::::::.
#                     :::::::::::
#                  ..:::::::::::'
#               '::::::::::::'
#                 .::::::::::
#            '::::::::::::::..
#                 ..::::::::::::.
#               ``::::::::::::::::
#                ::::``:::::::::'        .:::.
#               ::::'   ':::::'       .::::::::.
#             .::::'      ::::     .:::::::'::::.
#            .:::'       :::::  .:::::::::' ':::::.
#           .::'        :::::.:::::::::'      ':::::.
#          .::'         ::::::::::::::'         ``::::.
#      ...:::           ::::::::::::'              ``::.
#     ```` ':.          ':::::::::'                  ::::..
#                        '.:::::'                    ':'````..
#
#                     美女保佑 永无BUG


import matplotlib.pyplot as plt
import numpy as np
# 通过sklearn.linemodel加载岭回归方法
from sklearn.linear_model import Ridge
# 通过sklearn.preprocessing加载PolynomialFeatures用于创建多项式特征，如ab, a^2, b^2
from sklearn.preprocessing import PolynomialFeatures

v0, v1, v2, v3, v4, v5, v6, v7, v8, v9 = [], [], [], [], [], [], [], [], [], []
v10, v11, v12, v13, v14, v15, v16, v17, v18, v19 = [], [], [], [], [], [], [], [], [], []
v20, v21, v22, v23, v24, v25, v26, v27, v28, v29 = [], [], [], [], [], [], [], [], [], []
v30, v31, v32, v33, v34, v35, v36, v37 = [], [], [], [], [], [], [], []
target = []
fr = open('zhengqi_train.txt')
lines = fr.readlines()
# print(len(lines))
for line in lines[1:]:
    line = line.strip().split('\t')
    v0.append(float(line[0]))
    v1.append(float(line[1]))
    v2.append(float(line[2]))
    v3.append(float(line[3]))  
    v4.append(float(line[4]))   
    v5.append(float(line[5]))    
    v6.append(float(line[6]))
    v7.append(float(line[7]))
    v8.append(float(line[8]))
    v9.append(float(line[9]))
    v10.append(float(line[10]))
    v11.append(float(line[11]))
    v12.append(float(line[12]))
    v13.append(float(line[13]))
    v14.append(float(line[14]))
    v15.append(float(line[15]))
    v16.append(float(line[16]))
    v17.append(float(line[17]))
    v18.append(float(line[18]))
    v19.append(float(line[19]))
    v20.append(float(line[20]))
    v21.append(float(line[21]))
    v22.append(float(line[22]))
    v23.append(float(line[23]))
    v24.append(float(line[24]))
    v25.append(float(line[25]))
    v26.append(float(line[26]))
    v27.append(float(line[27]))
    v28.append(float(line[28]))
    v29.append(float(line[29]))
    v30.append(float(line[30]))
    v31.append(float(line[31]))
    v32.append(float(line[12]))
    v33.append(float(line[33]))
    v34.append(float(line[34]))
    v35.append(float(line[35]))
    v36.append(float(line[36]))
    v37.append(float(line[37]))
    target.append(line[38])
v0 = np.array(v0)
v1 = np.array(v1)
# print(lines[1])
# print(len(v0))
# print(len(target))
# print(v1[2000:])
print(type(v1))
plt.plot(v1)
X = [v0, v1]
print(X)
print(type(X))
print()

