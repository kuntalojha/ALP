---
outline: deep
---

# Experiment 2

## Question
- **Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.**

## Program
```bash [exp-2.sh]
#!/bin/bash

echo "Enter the file name:"
read filename

echo "The contents before deleting:"
cat "$filename"

echo "Enter the word to be deleted: "
read word

# Delete lines containing the word
grep -vi "$word" "$filename" > temp
mv temp "$filename"

echo "The contents after deleting"
cat "$filename"
```

## Output
```bash
kuntal@ojha:~/linux/exp2$ ls
data.text  exp2.sh
kuntal@ojha:~/linux/exp2$ chmod 777 exp2.sh
kuntal@ojha:~/linux/exp2$ ./exp2.sh
Enter the file name:
data.text
The contents before deleting:
Hello World
Delete this line
Another Line
Enter the word to be deleted: 
delete
The contents after deleting
Hello World
Another Line
kuntal@ojha:~/linux/exp2$ 
```
