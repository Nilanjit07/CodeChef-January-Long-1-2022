#Problem Link : https://www.codechef.com/JAN221C/problems/PINBS
#Problem Code : PINBS

for _ in range(int(input())):
    m=str(input())
    if(len(m)==1):
        print("No")
    elif('10' in m):
        print("Yes")
    elif('11' in m):
        print("Yes")
    else:
        print("No")
