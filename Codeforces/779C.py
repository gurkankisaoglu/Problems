buyings=input().split()
n=int(buyings[0])
k=int(buyings[1])

result=0

discounts=input().split()
normal=input().split()

for i in range(len(discounts)):
	discounts[i]=int(discounts[i])
	normal[i]=int(normal[i])

count1=0
count2=0
for p in range(len(discounts)):
	if discounts[p]<normal[p]:
		count1+=1
	else:
		count2+=1

for s in range(k):
	dic={}
	for y in range(len(discounts)):
		dic.setdefault(str(discounts[y])+"-"+str(normal[y]),discounts[y]-normal[y])
	list1=list(dic.values())
	min_value=min(list1)
	for key in dic:
		if dic[key]==min_value:
			number=key.split("-")
			result+=int(number[0])
			discounts.remove(int(number[0]))
			normal.remove(int(number[1]))
			break
if count1<k:
	for j in  range(count1):
		result+=min(discounts)
		index=discounts.index(min(discounts))
		normal.remove(normal[index])
		discounts.remove(min(discounts))
	
	for l in range(n-count1):
		if len(normal)==0:
			break
		result+=min(normal)
		normal.remove(min(normal))

else:
	for o in range(count1-k):
		if len(normal)==0:
			break
		result+=min(discounts)
		index=discounts.index(min(discounts))
		normal.remove(normal[index])
		discounts.remove(min(discounts))


print(result)			
