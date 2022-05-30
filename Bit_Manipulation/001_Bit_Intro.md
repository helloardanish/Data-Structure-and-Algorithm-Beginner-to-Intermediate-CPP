## Bit Manipulation Basics

### Types
* Binary AND **&**
* Binary OR **|**
* Binary XOR **^**
* Binary One's Complement **~**
* Binary Left Shift **<<**
* Binary Right Shift **>>**


## Binary AND **&**

If both the bits are 1(true) then only result will be 1(true) else 0(false).

##### Rules:
0 & 0 = 0; 0 & 1 = 0; 1 & 0 = 0; 1 & 1 = 1

5 & 7 = 0000101 & 0000111 = 0000101 = 5(Decimal)

## Binary OR **|**

If any one bits is 1(true) then result will be 1(true) else 0(false).

##### Rules:
0 | 0 = 0; 0 | 1 = 1; 1 | 0 = 1; 1 | 1 = 1

5 | 8 = 0101 | 1000 = 1101 = 13(Decimal)

## Binary XOR **|** (Exclusive OR)

If both the bits are same, result is 0(false) else 1(true).

##### Rules:
0 ^ 0 = 0; 0 ^ 1 = 1; 1 ^ 0 = 1; 1 ^ 1 = 0

5 ^ 7 = 000101 ^ 000111 = 000010 = 2

## Binary Not(1's Complement) **~** (Exclusive OR)

Change the bit to its complement(Flip the bits). 0 to 1 or 1 to 0.

~0 = 1; ~1 = 0;

~000101 = 111010


Bit result can be signed or unsigned.

if ~0 done in c++ program, it will give -1 as result.

Because 0 is 32 bit number in memory.

0 written as 0000000000000..
if ~0000000000000.. is done, result will be 11111111111...(All 32bit as once)
We know most significant bit represent the signed bit. Here first signed bit is 1 so it is a negative number. Remaining 31 bits represent the magnitude.
11111111111... these numbers are stored in a 2's compliment form.

So first flip the bits and add 1. Ans will be 00000000000 + 1 = 0000000000001

Now it is a positive number as 0 represent the 1st bits. 
