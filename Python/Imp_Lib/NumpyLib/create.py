# Thiis is for making n - D matrix using numpy 

import numpy as np 

# creating an 1d array 

arr1d = np.array([1,3,2,4,5,5]) 

# print(arr1d) 

arr2d = np.array([
          [1,2,3,4,5,6,6] ,
          [4,6,3,2,5,6,7]
        ])

# print(arr2d)

arr3d = np.array([
          [
              [2,4,1,34,5],
              [3,5,3,2,5] ,
              [6,4,6,7,1]
          ],
          [
              [7,4,6,1,6],
              [9,5,3,2,7],
              [3,6,8,2,5]
          ],
          [
              [2,5,4,6,7],
              [8,5,7,8,3],
              [5,7,2,4,5]
          ]
        ])

print(arr3d.shape)

# print(arr3d)