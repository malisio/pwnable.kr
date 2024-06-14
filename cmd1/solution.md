
![[code.png]]

So let me break the code down for you 
There is two functions filter that takes a pointer to a char (string) it just checks if it keyword have the following words "flag","sh", "tmp" and if so it makes it a null value by assigning the value 0 
So we need to bypass this function later 
The main bread is the putenv function This function is related to the PATH variable in the Linux system, in short terms when you execute a command in Linux it checks that path to see if it got the binary/command you are looking for, and executing that command with something like *./cmd1 "cat cmd1.c"*
well give you :
sh: 1: cat: not found

![[failed.png]]

cause the putenv made the PATH variable /thankyouverymuch which is invalide.
lastly we need to bypass the thing

Lastly we need to bypass the filter Function.
Ever heard of symbolic links? Well it well help us today!
First let create a Directory in /tmp

![[symbolic.png]]
We created a symblic link to the flag so we can bypass the filter function and now let Test out Payload.
![[flag.png]]
and yay we got the flag to our second Challenge cmd2
Stay tuned for the next Write up xDDD.