from sys import stdin, stdout, maxint
from math import sqrt

def prim(vertex, n):
	mst = []
	mst_bool = [False for x in range(n)]
	mst_bool[0] = True
	mst.append(0)
	mst_distance = 0
	while(len(mst) != n):
		next_node, d = extract_min(vertex, mst, mst_bool, n)
		mst.append(next_node)
		mst_bool[next_node] = True
		mst_distance += d
	return mst_distance

def extract_min(vertex, mst, mst_bool, n):
	min_value, index = maxint, 0
	for node in mst:
		for i in range(n):
			if (node != i and not mst_bool[i]):
				d = distance(vertex[node], vertex[i])
				if (d < min_value):
					index = i
					min_value = d
	return index, min_value


def distance(p1, p2):
	return sqrt((p1[0]-p2[0])**2 + (p1[1]-p2[1])**2)

def main():
	n = int(stdin.readline().replace('\n',''))
	vertex = []
	for i in range(n):
		line = stdin.readline().replace('\n','')
		line = line.split(" ")
		vertex.append([float(line[0]),float(line[1])])
	mst_distance = prim(vertex, n)
	stdout.write('{0:.2f}\n'.format(mst_distance))

if __name__ == '__main__':
	main()