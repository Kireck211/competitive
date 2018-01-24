from sys import stdin, stdout

def rdl():
	return stdin.readline().replace('\n', '')

def rdls():
	return rdl().split(' ')

def find(parents, i):
	if (parents[i] == i):
		return i
	else:
		parents[i] = find(parents,parents[i])
		return parents[i]

def union_find(parents, num_sets, u, v):
	up = find(parents, u)
	vp = find(parents, v)
	if (up != vp):
		num_sets[0] -= 1
		parents[u] = vp

def main():
	cases = int(rdl())
	while(cases):
		line = rdls()
		n, e = int(line[0]), int(line[1])
		parents = [x for x in range(n+10)]
		num_sets = [n]
		for i in range(e):
			line = rdls()
			u, v = int(line[0]), int(line[1])
			union_find(parents, num_sets, u, v)
		num_sets = num_sets[0]
		result = (num_sets - 1) * (num_sets / 2)
		stdout.write('{}\n'.format(result))
		cases-=1

if __name__ == '__main__':
	main()