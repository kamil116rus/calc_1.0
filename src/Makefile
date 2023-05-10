CC = gcc
FLAGS = -Wall -Werror -Wextra

all: clang sborka go

sborka1: calc_1.0.c list.c parser.c  
	$(CC) $(FLAGS)  -g -fsanitize=address calc_1.0.c list.c parser.c -o main

sborka: calc_1.0.c list.c parser.c  
	$(CC) $(FLAGS)   calc_1.0.c list.c parser.c -o main

clang: 
	clang-format -i *.c *.h

git: 
	git add . 
	git commit -m"make commit"
	git push origin main

go:
	./main



rebuild: clean all

clean:
	rm -rf main *.out main