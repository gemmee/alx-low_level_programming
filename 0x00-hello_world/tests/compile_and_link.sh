#!/bin/bash

# Check if the C file variable is set
if [ -z "$CFILE" ]; then
    echo "Error: Variable \$CFILE is not set. Please provide the C file name."
    exit 1
fi

# Compile the C file and create an executable named cisfun
gcc "$CFILE" -o cisfun

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation completed successfully. Executable created: cisfun"
else
    echo "Error: Compilation failed. Please check the C file and try again."
    exit 1
fi
