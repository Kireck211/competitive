from sys import stdin, stdout

def rdl():
	return stdin.readline().replace('\n', '')

def rdli():
	return int(rdl())

def main():
	obj_angle = rdli()
	permitted_minutes = []
	for i in range(0, 60):
		minutes = i % 60
		hours = i // 12
		current_angle = abs(minutes - hours)
		permitted_minutes.append(current_angle*6)
	while (obj_angle != ''):
		obj_angle = int(obj_angle)
		if (obj_angle >= 90):
			obj_angle -= 90
		answer = None
		if (obj_angle in permitted_minutes):
			answer = 'Y'
		else:
			answer = 'N'
		stdout.write('{}\n'.format(answer))
		obj_angle = rdl()

if __name__ == '__main__':
	main()