#!/bin/bash

# Define input files
input_files=("optimized.c" "unoptimized.c")

# Define optimization levels
optimizations=("-O0" "-O1" "-O2" "-O3")

# Define output directories for each optimization level
output_dir="massif_results"
mkdir -p "$output_dir"

# Loop over each input file
for file in "${input_files[@]}"; do
    # Get the base name of the file (without extension)
    base_name=$(basename "$file" .c)
    
    # Loop over each optimization level
    for opt in "${optimizations[@]}"; do
        # Compile the C file with the current optimization level
        output_file="${base_name}_${opt//[-O]/}.out"  # Remove `-O` from optimization level for the filename
        gcc $opt "$file" -o "$output_file"

        # Run the compiled program with valgrind's massif tool
        massif_output="${base_name}_${opt//[-O]/}.massif"
        valgrind --tool=massif --massif-out-file="$output_dir/$massif_output" ./$output_file

        # Clean up the compiled executable after profiling
        rm -f "$output_file"
    done
done

echo "Massif profiling complete. Check the '$output_dir' directory for results."

