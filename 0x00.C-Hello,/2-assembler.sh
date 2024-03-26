#!/bin/bash
# Script to generate assembly code of a C file and save it in an output file

# Check if CFILE variable is set
if [ -z "$CFILE" ]; then
    echo "Error: CFILE environment variable is not set"
    exit 1
fi

# Check if the C file exists
if [ ! -f "$CFILE" ]; then
    echo "Error: $CFILE does not exist"
    exit 1
fi

# Extract the file name without extension
FILENAME=$(basename "$CFILE" .c)

# Define output file name with .s extension
OUTPUT_FILE="$FILENAME.s"

# Generate assembly code of the C file and save it in the output file
gcc -S "$CFILE" -o "$OUTPUT_FILE"

# Check if assembly code generation ran successfully
if [ $? -eq 0 ]; then
    echo "Assembly code saved in '$OUTPUT_FILE'"
else
    echo "Error: Failed to generate assembly code"
    exit 1
fi


