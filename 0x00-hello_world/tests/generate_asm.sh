#!/bin/bash

# Check if the C file variable is set
if [ -z "$CFILE" ]; then
    echo "Error: Variable \$CFILE is not set. Please provide the C file name."
    exit 1
fi

# Extract the base name of the C file (without extension)
BASE_NAME="${CFILE%.*}"

# Generate assembly code from the C file
gcc -S "$CFILE" -o "$BASE_NAME.s"

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Assembly code generation completed successfully. Output saved in '$BASE_NAME.s'"
else
    echo "Error: Assembly code generation failed. Please check the C file and try again."
    exit 1
fi
