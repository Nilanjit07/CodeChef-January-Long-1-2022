#Problem Link : https://www.codechef.com/JAN221C/problems/RIFFLES
#Problem Code : RIFFLES


T = int(input())
while T:	
	N,K = map(int, input().split(' '))
	N = N-1
	for i in range(N+1):
	    if(2<<i)%N == 1:
	        temp = i+1
	        break
	if temp == K :
	    itr = N+1
	elif temp > K:
	    itr = (1<<K)%N
	elif temp < K:
	    itr = 1<<(K%temp)%N
	Z = 0
	for i in range(N+1):
	    print(Z+1, end=' ')
	    Z=(Z+itr)%N
	    if Z == 0:
	        Z = N
	print()
	T-=1
