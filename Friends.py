"""
	After IOI Ilya decided to make a business. 
	He found a social network called "TheScorpyBook.com". 
	It currently has N registered users. As in any social network two users can be friends. 
	Ilya wants the world to be as connected as possible, so he wants to suggest 
	friendship to some pairs of users. He will suggest user u to have a friendship with user v if
	they are not friends yet and there is a user w who is friends of both of them. 
	Note that u, v and w are different users. Ilya is too busy with IPO these days, so he asks you to count 
	how many friendship suggestions he has to send over his social network.

"""
# cook your dish here
n = int(input())
string = []
binary = []
for i in range(n):
    inp = input()
    string.append(inp)
    binary.append(int(inp,2))
    
count = 0;
for i in range(n):
    for j in range(i+1,n):
        if string[i][j] == '0' and binary[i]&binary[j]:
            count+=1;
            
print(count*2)