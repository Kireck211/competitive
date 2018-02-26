sets = [x for x in range(11)]

def find(index):
	if (index == sets[index]):
		return index;
		finded = find(sets[index])
		sets[index] = finded
	return finded

def union_find(index1, index2):
	find_1 = find(index1)
	find_2 = find(index2)
	if (find_1 == find_2): # Estan en el mismo conjunto
		return
	else: # Estan en diferentes conjuntos
		sets[find_2] = find_1
	print(sets)

def main():
	print(sets)
	union_find(0,1)
	union_find(2,3)
	union_find(4,5)
	union_find(7,9)
	union_find(10,3)
	union_find(1,4)
	union_find(7,1)

if __name__ == '__main__':
	main()