inp=raw_input()
fraction=inp.find(".")
if int(inp[fraction-1])==9:
	print "GOTO Vasilisa."	
elif int(inp[fraction+1])<5:
	print int(inp[:fraction])
else:
	print int(inp[:fraction])+1

