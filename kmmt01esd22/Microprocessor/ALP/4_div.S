/*To perform division without using div instruction*/

MVI B 08h
MVI C 02h
MOV A B
MVI D 00h
LOOP: INR D
SUB C
JNZ LOOP
MOV A D
