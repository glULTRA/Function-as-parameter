all: compile run

compile:
	gcc -o main main.c -Wall -Wextra -g
run:
	.\main.exe