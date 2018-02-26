from sys import stdin, stdout

class Node:
	def __init__(self, index):
		self.index = index
		self.visited = False
		self.cost = 0

def rdl():
	return stdin.readline().replace('\n', '')

def rds():
	return rdl().split(' ')

def si():
	return list(map(lambda x: int(x), rds()))

def main():
	queries = int(rdl())
	for q in range(queries):
		line = si()
		num_nodes, edges = line[0], line[1]
		queue = []
		adj = [[] for x in range(num_nodes)]
		nodes = []
		for n in range(num_nodes):
			nodes.append(Node(n))
		for e in range(edges):
			line = si()
			adj[line[0]-1].append(nodes[line[1]-1])
			adj[line[1]-1].append(nodes[line[0]-1])
		s = int(rdl()) - 1
		queue.append(s)
		while(len(queue)):
			index = queue.pop(0)
			for node in adj[index]:
				if (not node.visited):
					node.visited = True
					node.cost = nodes[index].cost + 6
					queue.append(node.index)
		for index, node in enumerate(nodes):
			if (index != s):
				if (node.cost == 0):
					stdout.write('-1 ')
				else:
					stdout.write(str(node.cost) + ' ')
		stdout.write('\n')

if __name__ == '__main__':
	main()