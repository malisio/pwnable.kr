Hello, Today I well be sharing another Solve to the solution named  Random 
Let take a look at the code
![[Code-Review.png]]
Hmm Interesting  
So let break down the Code Firstly There is 3 main thing we need to know
Bitwise Operator XOR and How it Works. Second That The Variable Random is always random and stay consistent after knowing it value.
and 3 thing We need to know simple maths.
So How can we get The flag?
Firstly we need to know the value or Random We can do it by simply manipulating the code in our own terminal and getting it value.
![[manipulation.png]]

We now know that the random value is 1804289383
Since we know Two value and we only need to know the 3rd.
Just some basics math and we can get it.
So we Have 
key ^ random = 0xdeadbeef.
that means that key = 0xdeadbeef ^ random.
Here is the code!
![[Proof-of-concept.png]]
Let get the flag Now.

![[random/assets/Flag.png]]
 and GGs Cya in the next time.
 