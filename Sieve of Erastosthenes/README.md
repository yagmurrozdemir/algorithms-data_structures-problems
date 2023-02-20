A program that finds prime numbers using the Sieve of Erastosthenes, an algorithm devised by a Greek mathematician of the same name who lived in the third century BC.


The algorithm finds all prime numbers up to some maximum value n, as described by the following pseudocode: 

    Create a queue of numbers to process. 

    Fill the queue with the integers 2 through n inclusive. 

    Create an empty result queue to store primes. 

    Repeat the following steps while the queue of numbers is not empty: 

    Obtain the next prime p by removing the first value from the queue of numbers. 

    Put p into the result queue of primes. 

    Loop through the queue of numbers, eliminating all numbers that are divisible by p.
    
    All remaining values in the numbers queue are prime, so transfer them to the result primes queue. 
