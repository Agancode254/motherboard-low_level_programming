#!/bin/bash
# Script to compile a C file and create an executable named cisfun

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

# Define output executable name
OUTPUT_EXECUTABLE="cisfun"

# Compile the C file and create the executable
gcc "$CFILE" -o "$OUTPUT_EXECUTABLE"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Executable '$OUTPUT_EXECUTABLE' created"
else
    echo "Error: Failed to compile"
    exit 1
fi


