string=raw_input()
dic={}
for q in string:
	if q in dic.keys():
		dic[q]+=1
	dic.setdefault(q,1)
output=min(dic["B"],dic["u"]/2,dic["l"],dic["b"],dic["a"]/2,dic["s"],dic["r"])
print output
	
