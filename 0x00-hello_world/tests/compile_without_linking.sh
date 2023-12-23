#!/bin/bash

# Check if the C file variable is set
if [ -z "$CFILE" ]; then
    echo "Error: Variable \$CFILE is not set. Please provide the C file name."
    exit 1
fi

# Extract the base name of the C file (without extension)
BASE_NAME="${CFILE%.*}"

# Compile the C file without linking
gcc -c "$CFILE" -o "$BASE_NAME.o"
# Instead you can simply use the below command
# gcc -c "$CFILE"

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation completed successfully. Output saved in '$BASE_NAME.o'"
else
    echo "Error: Compilation failed. Please check the C file and try again."
    exit 1
fi
