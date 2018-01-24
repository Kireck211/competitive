from sys import stdin, stdout

def read_line():
	return stdin.readline().replace('\n', '')

def water_up(matrix, i, j):
	if (i - 1 < 0):
		return True
	elif (matrix[i-1][j] == '-'):
		return True
	return False

def water_right(matrix, i, j, m):
	if (j + 1 >= m):
		return True
	elif(matrix[i][j + 1] == '-'):
		return True
	return False

def water_down(matrix, i, j, n):
	if (i + 1 == n):
		return True
	elif(matrix[i+1][j] == '-'):
		return True
	return False

def water_left(matrix, i, j):
	if (j - 1 < 0):
		return True
	elif(matrix[i][j-1] == '-'):
		return True
	return False


def is_coastline(matrix, i, j, n, m):
	if (matrix[i][j] == '+'):
		if (water_up(matrix, i, j) or water_right(matrix, i, j, m) or water_down(matrix, i, j, n) or water_left(matrix, i, j)):
			return True
	else:
		return False

def main():
	line = read_line().split(' ')
	n, m = int(line[0]), int(line[1])
	matrix = []
	for i in range(n):
		line = read_line()
		matrix.append([])
		for element in line:
			matrix[i].append(element)
	coasts = 0
	for i in range(n):
		for j in range(m):
			if(is_coastline(matrix,i,j,n,m)):
				coasts+=1
	stdout.write('{}\n'.format(coasts))

if __name__ == '__main__':
	main()