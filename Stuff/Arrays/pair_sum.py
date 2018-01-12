def pair_sum(lst,num):
	seen=set()
	output=set()

	for n in lst:
		target=num-n

		if target not in seen:
			seen.add(n)
		else:
			output.add(((min(n,target)) , max(n,target)))	
	return len(output)

######################### O(n) complexity #########################
