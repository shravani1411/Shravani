all:libmarket.a libmarket.so
	echo "lib build done"
libmarket.a:
	gcc -c sale.c
	gcc -c stock.c
	gcc -c purchase.c
	ar -rc libmarket.a sale.o stock.o purchase.o
libmarket.so:
	gcc -c -fpic sale.c
	gcc -c -fpic stock.c
	gcc -c -fpic purchase.c
	gcc -shared sale.o stock.o purchase.o -o libmarket.so
clean:
	rm *.o
	rm libmarket.a libmarket.so
