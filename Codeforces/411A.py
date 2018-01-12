password=raw_input()
list=[]
for i in range(len(password)):
	list.append(password[i-1])
digit=0
upper=0
lower=0
for q in list:
	if q.isdigit():
		digit=digit+1
	if q.isupper():
		upper=upper+1
	if q.islower():
		lower=lower+1
if digit!=0 and upper!=0 and lower!=0  and len(password)>=5:
	print "Correct"
else:
	print "Too weak"
