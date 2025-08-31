---
outline: deep
---

# Experiment 1

## Question
- Write a shell script that accepts a file name, starting and ending line numbers as 
arguments and displays all the lines between the given line numbers.

## Program
```bash [exp1.sh]
#!/bin/bash
echo "Enter the file name: "
read filename

echo "Enter the starting line number: "
read s_line

echo "Enter the ending line number: "
read e_line

# Extract the lines
sed -n "${s_line},${e_line}p"  "$filename" > newfile.txt

echo "The extracted lines are:"
cat newfile.txt
```

## Output
```bash

```