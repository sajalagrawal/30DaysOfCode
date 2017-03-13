//https://www.hackerrank.com/challenges/30-regex-patterns
//Author - Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#!/bin/python3

import sys
import re

names=[]

N = int(input())
for a0 in range(N):
    data=str(input()).split(' ')
    name=data[0]
    email=data[1]
    
    if(re.search('.+@gmail\.com$',email)):
        names.append(name)
        
names.sort()
for n in names:
    print(n)
