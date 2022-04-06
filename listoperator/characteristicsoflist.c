#list operations:
1)length:
a=[10,20,30,40]
print(len([10,20,30,40]))
o/p=4
x=[1,2,3]
print(len([1,2,3]))
o/p=3

a=[2.5,3,"bannysha"]
print(a)
#o/p=[2.5, 3, 'bannysha']
print(id(a)) #before and after the value in a id is same ->mutable
o/p=2427086686848
a[2]=4
print(a)
#o/p=[2.5, 3, 4]
print(id(a))
#o/p=2427086686848

2)linear data structure: list elements can be added sequentially
a=[1,2,3]
a=a+[4,5]
print(a)
#o/p=[1,2,3,4,5]
note:(-)not work in list.

#mixed type elements
a=[1,"bannysha",20.5] #all data types integer,string,float
print(a)
o/p =[1, 'bannysha', 20.5]
x=[20.5,"freedom",12]
print(x)
o/p=[20.5, 'freedom', 12]


#nested list
a=[10,20,[1,2,3],30]
print(a)
o/p=[10, 20, [1, 2, 3], 30]
a[2] #index of 2 is [1,2,3]
o/p=[1, 2, 3]
a[1] #index of 1
o/p=20
a[3]
o/p=30

a=[1,2,3,[56,7],67,9,0]
print(a)
o/p=[1, 2, 3, [56, 7], 67, 9, 0]
print(a[0],a[1],a[2],a[3],a[4],a[5],a[6])
o/p=1 2 3 [56, 7] 67 9 0
print(a[3][0],a[3][1])
o/p=5 6 7

#Repetition
a="bannysha"
print(["bannysha"]*3)
o/p=['bannysha', 'bannysha', 'bannysha']
print([a]*3)
o/p=['bannysha', 'bannysha', 'bannysha'b="sai"
print(["sai"]*3)
o/p=['sai', 'sai', 'sai']
c="lucky"
print([c]*4)
o/p=['lucky', 'lucky', 'lucky', 'lucky']]

a=[1,2,3,[56,7],67,9,0]
print(len(a))
o/p=7
a=[1,2,3,[56,7],67,9,0]
print(a[3]*3)  #[56,7,56,7,56,7]
o/p=[56, 7, 56, 7, 56, 7]




a=[10,20,30,40] #[0]=10,[1]=20,[3]=30,[4]=40.
a[0]
o/p=10
a[6]  #6 index is not there in input of a
Traceback (most recent call last):
  File "<pyshell#27>", line 1, in <module>
    a[6]
IndexError: list index out of range
a[3]
o/p=40
a[2]
o/p=30


	
