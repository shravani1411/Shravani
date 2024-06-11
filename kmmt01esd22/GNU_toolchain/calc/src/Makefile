include .config
ifdef ADD
CC_FLAG := -DADD
endif
ifdef SUB
CC_FLAG += -DSUB
endif
all: mycalc
	echo "build done"
mycalc: main.o
	${CC} ${STATIC_FLAG} main.o -lcalc -L ../lib/ -o ../bin/mycalc
main.o: main.c
	${CC} ${DEBUG_FLAG} ${CC_FLAG} -c main.c -I ../inc/
install:
	sudo cp ../bin/mycalc /usr/bin
clean:
	rm *.o
	rm ../bin/mycalc
	
