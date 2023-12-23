#!/bin/bash

# A script that runs a C file through the preprocessor and save the result
# into another file where
# the c file name will be saved in the variable $CFILE and
# the output should be saved in the file c


# Check if the C file variable is set
if [ -z "$CFILE" ]; then
	echo "Error: Variable \$CFILE is not set. Please provide the C file name."
	echo "Example: export CFILE=main.c"
	exit 1
fi

# Run the C file through the preprocessor and save the result to file 'c'
cpp "$CFILE" -o c
# the above line can also be replaced with
# cpp -o c "$CFILE"
# or
# gcc -E "$CFILE" -o c
# or
# gcc "$CFILE" -E -o c
# or
# gcc -o c -E "$CFILE"
# or
# gcc -o c "$CFILE" -E
# you can also remove the double quotes in all cases

# Check if the preprocessing was successful
if [ $? -eq 0 ]; then
	echo "Preprocessing completed successfully. Output saved in 'c'"
else
	echo "Error: Proprocessing failed. Please check the C file and try again."
	exit 1
fi

