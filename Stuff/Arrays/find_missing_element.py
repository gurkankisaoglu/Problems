#######CANT HANDLE DUPLICATE NUMBERS################

def finder(arr1,arr2):
	seen=set()
	for num in arr1:
		if num not in seen:
			seen.add(num)
	for num in seen:
		if num not in arr2:
			return str(num)+" is the missing number"
	return			
print(finder([1,2,3,4,5,6,7],[3,7,2,1,4,6]))

##########HANDLE DUPLICATE NUMBERS##################
import collections
def finder2(arr1,arr2):
	dic=collections.defaultdict(int)

	for num in arr2:
		dic[num]+=1

	for num in arr1:
		if dic[num] == 0:
			return num
		else :
			dic[num]-=1
	return			


############ XOR VERSION #########################
def finder3(arr1,arr2):
	result=0
	for num in arr1+arr2:
		result^=num
		print result
	print result