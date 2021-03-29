'''
검은색 볼펜 자루, 파란색 볼펜 자루, 빨간색 볼펜 자루가
있다. 이 자루의 볼펜 중에서 자루를 선택하여 명의
학생에게 남김없이 나누어 주는 경우의 수를 구하시오.
(단, 같은 색 볼펜끼리는 서로 구별하지 않고, 볼펜을 자루도
받지 못하는 학생이 있을 수 있다.)

검1 파4 보4 -> 5자루를 선택하고 2명에게 남김없이 줌
같은색은 서로 구별 X -> 서로 같은거
2명: 서로 다른 두명, 몰빵도 가능

서로다른->서로다른 순열
서로같은->서로다른 중조
검파빨은 다르지만 파끼리, 빨끼리는 같으므로 조합으로 하면 안됨
경우수에서 가장 간단한 방법인 '직접 세기'

검 빨 파
1  4  0 2H4
   3  1 2H3*2H1
   2  2
   1  3
   0  4
0  4  1
   3  2
   2  3
   1  4

'''

from itertools import *

def cc(x):
    b=[]
    for i in range(6):
        b.extend(list(combinations(x, i)))
    return list(set(b))

#print(cc('BRRRR'))

A=[]
for i in range(0, 2):
    for j in range(0, 5):
        for k in range(0, 5):
            if i+j+k == 5:
                #W: Black (aka White), R: Red, B: Blue
                A.append('W'*i+'R'*j+'B'*k)
                
D=[]
for i in A:
    D.extend(cc(i))
print(len((D)))
print((D))
