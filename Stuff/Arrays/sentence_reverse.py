def rev_word(s):

	words=[]
	length=len(s)
	space=[' ']

	i=0

	while i<length:
	
		if s[i] not in space:

			word_start=i
			
			while i<length and s[i] not in space:
				i+=1

			words.append(s[word_start:i])

		i++		

	return " ".join(reversed(words))	