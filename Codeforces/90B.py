gridSize=raw_input()
gridSize=gridSize.split(" ")
gridSize[0]=int(gridSize[0])
gridSize[1]=int(gridSize[1])
i=0
grid=[]
horizontalLines=[]
verticalLinesOld=[]
verticalLines=[]
while i<gridSize[0]:
	letters=raw_input()
	grid.append(letters)
	i+=1
for line in grid:
	newLine=" ".join(line)
	newLine=newLine.split(" ")
	horizontalLines.append(newLine)
for j in range(gridSize[1]):
	for k in range(gridSize[0]):
		verticalLinesOld.append(grid[k][j])
n=0
t=gridSize[0]
while n<gridSize[1]*gridSize[0]:
	verticalLines.append(verticalLinesOld[n:t])
	n+=gridSize[0]
	t+=gridSize[0]	
for line in horizontalLines:
	dic={}
	for element in line:
		if element in dic.keys():
			dic[element]+=1
		dic.setdefault(element,1)
	for key in dic.keys():			
		if dic[key]>1:
			for element in line:
				if element==key:
					index=line.index(element)
					line[index]=1
for line in verticalLines:
	dic={}
	for element in line:
		if element in dic.keys():
			dic[element]+=1
		dic.setdefault(element,1)
	for key in dic.keys():
		if dic[key]>1:
			for element in line:
				if element==key:
					index=line.index(element)
					line[index]=0
verticalLinesNew=[]
verticalLinesSoNew=[]
output=""
for p in range(gridSize[0]):
	for line in verticalLines:
		verticalLinesNew.append(line[p])
r=0
b=gridSize[0]
while r<gridSize[1]*gridSize[0]:
	verticalLinesSoNew.append(verticalLinesNew[r:b]) 
	r+=gridSize[0]
	b+=gridSize[0]

listV=[]
listH=[]
for line in verticalLinesSoNew:
	for y in range(gridSize[0]):
		listV.append(line[y])
for line in horizontalLines:
	for u in range(gridSize[1]):
		listH.append(line[u])

dicH={}
for index in range(len(listH)):
	dicH.setdefault(index,listH[index])

dicV={}
for index in range(len(listV)):
	dicV.setdefault(index,listV[index])

for value in range(len(listV)):
	if dicV[value]!=dicH[value]:
		listH[value]=3
for element in listH:
	if type(element)==str:
		output+=element
print output
