Hello today I well try to solve this Challenge from pwnable.kr the first and basic one called fd

![[welcome.png]]

Let ssh and see what we got there.
![[challenge.png]]
We can see that we are provided with 3 main things a binary which seems to be compiled from fd.c source code and lastly a flag we need to get.
Seeing The flags on the files in this directory we only have permission to execute fd and read fd.c Source code. Let review it and break it down:

![[source-code.png]]
The string buf is a globar variable, the main function takes an argument from the terminal then checks it.
Now for our part we the function atoi is a fuction that allows us to convert a string to a int type and 0x1234 is the a heximal value for 4660 this means the fd variable should be set equal to zero cause in the read function the fd needs to be 0 to get to check the if statement.
Ah I forgot since the fd have a SUID bit in it we can read the flag even tho we dont have permission to read it.
So that means we need to pass 4660 from our terminal to the script and Pass the string "LETMEWIN" to it to get the flag

![[solution.png]]
and that it for today!