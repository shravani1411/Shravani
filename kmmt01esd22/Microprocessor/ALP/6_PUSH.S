/* To perform PUSH without using PUSH instruction */

LDA 4000h
MOV B A
LXI H E358h
DCX H
MOV M B
LDA 4001h
MOV C A
HLT

