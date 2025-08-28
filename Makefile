all:
	musl-gcc main.c -o ./RobinKool -fno-pie -fno-stack-protector -static -O0
