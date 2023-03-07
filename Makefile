all:
	gcc ./filesc/main.c ./filesh/matriz.h ./filesc/matriz.c -lm -o executavel
run:
	./executavel
clean:
	rm -rf executavel