n = int(input())

csum = 0
cnum = 0
ans = []
clist = []
dict = {
'pos': 0,
'neg': 0,
'zero': 0
}
for i in range(n):
    cnum=int(input())
    clist.append(cnum)
    if (cnum < 0):
        dict['neg']+=1
    elif (cnum > 0):
        dict['pos']+=1
    else:
        dict['zero']+=1

print(dict)
