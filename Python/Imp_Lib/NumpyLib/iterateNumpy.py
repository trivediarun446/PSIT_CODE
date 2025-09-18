# Here we check how to iterate the numpy array element using two methods slicing and using loop 

# With the help of indexing 
import numpy as np 


# This iteration when we now the shape of matrix 

# with the help of shape keyword we can find the shape of the matrix 
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

for dept in range(3):
    for row in range(3):
        for col in range(5):
            print("Print Element at Index " , dept , row , col , " = " , arr3d[dept][row][col])
 


#  Here we can print the element with the help of slicing 

print("This will print the all Row 0 in each depth " ,arr3d[:,0,:])

print("This will print the 0th dept in the 3d matrix " , arr3d[0,:,:])

print("This will print the all 0the row of each depeth ", arr3d[:,:,0])

print("This will print the Whole matrix in one " , arr3d[: , : , :])
