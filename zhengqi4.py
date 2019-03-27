import numpy as np
import pandas as  pd
import seaborn as sns
import matplotlib.pyplot as plt

train_data = pd.read_csv("zhengqi_train.txt", sep='\t')
print(train_data.head())
hitmapData = train_data.corr()
sns.heatmap(hitmapData, vmax=1, cmap="Blues")
plt.show()