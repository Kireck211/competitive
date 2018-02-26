from sys import stdin, stdout

def rdl():
	return stdin.readline().replace('\n','')

def rdi():
	return int(rdl())

def rds():
	return rdl.spli(' ')

def find(index, sets):
	if (index == sets[index]):
		return index
	sets[index] = find(sets[index], sets)
	return sets[index]

def union_find(u, v, sets, num_sets):
	find_u = find(u, sets)
	find_v = find(v, sets)
	if (find_u != find_v):
		sets[find_v] = find_u
		return num_sets - 1 # reduce to num_sets
	return num_sets # do not reduce to num_sets

def toInt(character):
	return ord(character) - ord('A')

def main():
	tests = rdi()
	rdl() # Read blank
	while(tests):
		max_letter = rdl()
		max_letter = toInt(max_letter) # change read letter to int cero based
		sets = [x for x in range(max_letter + 1)]
		num_sets = max_letter + 1
		line = rdl()
		while(len(line)): # read until blank new line in test case
			first, second = toInt(line[0]), toInt(line[1]) # set first and second to cero based integer from read line
			num_sets = union_find(first, second, sets, num_sets)
			line = rdl()
		stdout.write('{}\n\n'.format(num_sets))
		tests -= 1

if __name__ == '__main__':
	main()