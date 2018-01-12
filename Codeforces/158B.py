groups=raw_input()
values=raw_input().split(" ")
counter=0
counter+=values.count("4")
for i in range(values.count("4")):
	values.remove("4")
if values.count("3")>=values.count("1"):
	for i in range(values.count("1")):
		values.remove("1")
	counter+=values.count("3")
	for i in range(values.count("3")):
		values.remove("3")
	print values
if values.count("3")<values.count("1"):
	for i in range(values.count("3")):
		values.remove("1")
	counter+=values.count("3")
if values.count("2")%2==0:
	counter+=values.count("2")/2
if values.count("2")%2==1:
	counter+=values.count("2")/2
	ran=(values.count("2")/2)*2
	for i in range(ran):
		values.remove("2")
if values.count("2")%2==1 and  values.count("1")==1:
	counter+=values.count("2")
	for i in range(values.count("2")):
		values.remove("2")
		values.remove("1")	
if values.count("2")%2==1 and values.count("1")>1:
	counter+=values.count("2")
	for i in range(values.count("2")):
		values.remove("2")
		values.remove("1")
	values.remove("1")
if values.count("2")%2==1 and values.count("1")==0:
		counter+=1
if values.count("1")%4==0:
	counter+=values.count("1")/4
if values.count("1")%4!=0:
	counter+=values.count("1")/4+1
print counter	
