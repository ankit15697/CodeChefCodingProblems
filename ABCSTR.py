"""
Mike likes strings. He is also interested in algorithms. 
A few days ago he discovered for himself a very nice problem:

You are given an AB-string S. You need to count the number of substrings of S, 
which have an equal number of 'A'-s and 'B'-s.

Do you know how to solve it? Good. Mike will make the problem a little bit more difficult for you.

You are given an ABC-string S. You need to count the number of substrings of S, 
which have an equal number of 'A'-s, 'B'-s and 'C'-s.

A string is called AB-string if it doesn't contain any symbols except 'A' or 'B'.
 A string is called ABC-string if it doesn't contain any symbols except 'A', 'B' or 'C'.
"""
# cook your dish here
string = list(input())
ma = {}
ma[(0,0,0)] =1;

a = 0
b = 0
c = 0
cnt = 0
for i in range(len(string)):
    if string[i] == 'A':
        a+=1
    if string[i] == 'B':
        b+=1
    if string[i] == 'C':
        c+=1
    mi = min(a,b,c)
    if (a-mi,b-mi,c-mi) in ma.keys():
        cnt+=ma[(a-mi,b-mi,c-mi)]
        ma[(a-mi,b-mi,c-mi)]+=1
    else :
        ma[(a-mi,b-mi,c-mi)]=1
    
print(cnt)    