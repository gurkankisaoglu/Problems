statementNumber=raw_input()
x=0
for i in range(int(statementNumber)):
	statement=raw_input()
	if statement[1]=="+":
		x+=1
	else :
		x-=1
print x
