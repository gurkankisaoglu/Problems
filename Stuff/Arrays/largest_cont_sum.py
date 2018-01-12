def large_cont_sum(arr):

	max_sum=0
	current_sum=0

	for num in arr:

		current_sum+=num

		if current_sum<0:
			current_sum=0

		if current_sum>max_sum:
			max_sum=current_sum

	return max_sum

print(large_cont_sum([-2,-3,4,-1,-2,1,5,-3]))
print(large_cont_sum([1,2,-1,3,4,10,10,-10,-1]))