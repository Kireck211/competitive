from sys import stdin, stdout

def rdl():
	return stdin.readline().replace('\n', '')

def rds():
	return rdl().split(' ')

def main():
	queries = int(rdl())
	for q in range(queries):
		line = rds()
		nodes, edges = int(line[0]), int(line[1])
		adj = [[0 for x in range(nodes)] for y in range(nodes)]
		for e in edges:
			line = rds()
			line[0] = int(line[0]) - 1
			line[1] = int(line[1]) - 1
			adj[line[0]][line[1]] = 1
			adj[line[1]][line[0]] = 1
		start = int(rdl()) - 1

def bfs(adj, n, s):
	queue = [s]
	distances = [10000 for x in range(n)]
	while(queue):
		




if '__name__' == '__main__':
	main()