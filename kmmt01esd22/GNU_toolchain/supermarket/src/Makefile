include .config
ifdef SALE
CC_FLAG := -DSALE
endif
ifdef STOCK
CC_FLAG := -DSTOCK
endif
ifdef LIMIT
CC_FLAG := -DLIMIT
endif
ifdef PURCHASE
CC_FLAG := -DPURCHASE
endif
all:mymarket
	echo "build done"
mymarket:main.o
	${CC} ${STATIC_FLAG} main.o -lmarket -L ../lib/ -o ../bin/mymarket
main.o: main.c
	${CC} ${DEBUG_FLAG} ${CC_FLAG} -c main.c -I ../inc/
clean:
	rm *.o
	rm ../bin/mymarket

