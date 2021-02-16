## Introduction to Random Numbers
Random numbers are useful for lots of different programming tasks. The following are just a few examples:

• Random numbers are commonly used in games. For example, computer games that let the player roll dice use random numbers to represent the values of the dice. Programs that show cards being drawn from a shuffled deck use random numbers to represent the face values of the cards.

• Random numbers are useful in simulation programs. In some simulations, the computer must randomly decide how a person, animal, insect, or other living being will behave. Formulas can be constructed in which a random number is used to determine various actions and events that take place in the program.

• Random numbers are useful in statistical programs that must randomly select data for analysis.

• Random numbers are commonly used in computer security to encrypt sensitive data. 

The C++ library has a function, rand(), that you can use to generate random numbers. (The rand() function requires the cstdlib header file.) The number returned from the function is an int. Here is an example of its usage:

`y = rand();`

After this statement executes, the variable y will contain a random number. In actuality, the numbers produced by rand() are pseudorandom. The function uses an algorithm that produces the same sequence of numbers each time the program is repeated on the same system. For example, suppose the following statements are executed:
```
cout << rand() << endl;
cout << rand() << endl;
cout << rand() << endl;
```
The three numbers displayed will appear to be random, but each time the program runs, the same three values will be generated. In order to randomize the results of rand(), the srand() function must be used. srand() accepts an unsigned int argument, which acts as a seed value for the algorithm. By specifying different seed values, rand() will generate different sequences of random numbers.

A common practice for getting unique seed values is to call the time function, which is part of the standard library. The time function returns the number of seconds that have elapsed since midnight, January 1, 1970. The time function requires the ctime header file, and you pass 0 as an argument to the function. 

## Exercise
Examine and execute the main.cpp file demonstrating using the system time to seed the random number generator. Verify the program generates three different random numbers each time it is executed.
Now comment out the line that seeds the random number generator like so:

`// srand(seed);`

Does the program still generate three unique numbers each time it runs? If not why not?

**Add a comment to the program answering to the above question in your lab report.**