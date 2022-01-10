#Problem Link : https://www.codechef.com/JAN221C/problems/XORED
#Problem Code : XORED
#This is the Partial solution for the problem of XORED

t=int(input())
for _ in range(t):
    inputs = [int(item) for item in input().split()]
    y=inputs[0]
    x=inputs[1]
    sol = []
    solXor = 0
    for i in range(y - 1):
        sol.append(i)
        solXor = solXor ^ i
    lastSolution = solXor ^ x
    if lastSolution in sol:
        if lastSolution == sol[0]:
            sol[1] = sol[1] + 262144
        else:
            sol[0] = sol[0] + 262144
        lastSolution = lastSolution + 262144
    sol.append(lastSolution)
    print(*sol)
