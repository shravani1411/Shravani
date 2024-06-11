all:super_market
	echo "build done"
super_market:main1.o purchase.o sale.o stock.o
	gcc main1.c purchase.c sale.c stock.c -o super_market
main1.o:main1.c
	gcc -c main1.c
purchase.o:purchase.c
	gcc -c purchase.c
sale.o:sale.c
	gcc -c sale.c
stock.o:stock.c
	gcc -c stock.c
clean:
	rm *.o super_market
install:
	sudo cp super_market /bin/
