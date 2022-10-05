# -*- coding: utf-8 -*-
"""
Created on Sun Oct  3 14:28:55 2021

@author: VISHAKHA V
"""
def shell_sort(arr, n):
    g = n // 2
    while g > 0:
        for i in range(g, n):
            temp = arr[i]
            j = i
            while j >= g and arr[j - g] > temp:
                arr[j] = arr[j - g]
                j =j-g

            arr[j] = temp
        g=g//2


arr = []
print("Enter the number of elements")
n=int(input())
print("Enter the elements:")
for i in range(n):
    ele=int(input())
    arr.append(ele)
print("Before sorting:")
print(arr)
shell_sort(arr,n)
print('After sorting:')
print(arr)
