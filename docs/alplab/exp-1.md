---
outline: deep
---

# Experiment 1

## Question
- **Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.**

## Program
```bash [exp-1.sh]
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
kuntal@ojha:~/linux/exp1$ cat data.text
line one
line two
line three
line four
line five
line six
line seven
line eight
line nine
line ten
kuntal@ojha:~/linux/exp1$ chmod 777 exp1.sh
kuntal@ojha:~/linux/exp1$ ./exp1.sh
Enter the file name:
data.text
Enter the starting line number:
4
Enter the ending line number:
8
The extracted lines are:
line four
line five
line six
line seven
line eight
kuntal@ojha:~/linux/exp1$ 
```
