
def subsets(numbers):
    if numbers == []:
        return [[]]
    x = subsets(numbers[1:])
    return x + [[numbers[0]] + y for y in x]
 
# wrapper function
def subsets_of_given_size(numbers, n):
    return [x for x in subsets(numbers) if len(x)==n]


a=[2,2,1,3,2]
# subsets_of_given_size(a,2);
print(subsets_of_given_size(a,2)[0][1])

print(a.index(1));