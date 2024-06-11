##Date:10-12-2022; Topic: Bitwise operator

1. Write a count bits() function. This function should return no. of ones in given integer number.  [5M]

  int Count bits(int );

2. Take one unsigned int a=0xaabbccdd, retrieve and print values separately like "aab", "bccdd"? [5M]


3. Write a testbit() function. This function requires two 16-bit integer parameters. [10M]

The first parameter is a 16-bit value to test; the second parameter is a value in the range 0..15 describing which bit to test.

The function should return tr0ue if the corresponding bit contains a one, the function should return00 false if that bit position contains a zero.
The function should always return false if the second parameter holds a value outside the range 0..15.

4.Data compression and expansion using bitwise operators

	4a.Compress: [10M]

	Write a ToDate() function that accepts three parameters, a month, day, and year value.

	This function should return the 16-bit packed date value using the mentioned in the below format.

	The ToDate() function should automatically convert dates in the range 1900-1999 to the range 0..99.

	15	14	13	12	11	10	9	8	7	6	5	4	3	2	1	0

	M	M	M	M	D	D	D	D	D	Y	Y	Y	Y	Y	Y	Y
	
	1	0	0	1	0	1	1	0	1	0	0	1	0	0	1	1

	Above example Today Date: 13th Sept 2019.

4b. Extract: [10M]
Write three corresponding functions ExtractMonth(), ExtractDay(), and ExtractYear() that expect a 16-bit date value and return the corresponding month, day, or year value.

5.Write a function to search pattern count in a number func-search(int num,int pattern).

6.Write a function to count consecutive set bits max no of one's in a given number.

7.Count no of bits to be flipped to convert A to B
	ex: A=1101101 B=1011011
	o/p:4 bits

8.Write a fun-replace() to replace bits from 'start' position till 'end' position in 'x' with bits from 'start' position till 'end' position from 'y'
	ex: fun-replace(int x,int start,int end,int y)
	x=0000000001101101
	y=0001100011110011
	start=3 end =6
	after replacement:
	x=0000000001110101.
