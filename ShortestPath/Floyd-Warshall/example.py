from FloydWarshall import FloydWarshall

dp = []
dp.append([0,2,3])
dp.append([1,0,2**31])
dp.append([2,2**31,0])
print(FloydWarshall(dp))