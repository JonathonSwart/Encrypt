# Encrypt
Implements the Caeser Cipher decryption method 

# How to run it
To run this program you use Ubuntu or linux or any other C compilers
Compile it using the command line
-	gcc encrypt.c -o encrypt
To run the program use
-	./encrypt
You must input two strings into same command line as above for it to work. The first string is a number that represents how many letters in the alphabet you would like your phrase to shift. The second is the phrase you want to be encrypted. For longer phrases including spaces use '' surrounding your phrase.

For example:
gcc encrypt.c -o encrypt
./encrypt 5 'Hello World'
Your output will be
URYYB JBEYQ
