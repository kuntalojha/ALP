---
outline: deep
---

# Experiment 4

## Question
- Write a shell script that receives any number of file names as arguments checks if 
every argument supplied is a file or a directory and reports accordingly. Whenever 
the argument is a file, the number of lines on it is also reported.**

## Program
```bash [exp-4.sh]
#!/bin/bash

for x in "$@"
 do
    if [ -f "$x" ]
    then
        echo "$x is a file"
        echo "Number of lines in $x:"
        wc -l < "$x"
    elif [ -d "$x" ]; then
        echo "$x is a directory"
    else
        echo "$x is not a valid file or directory"
    fi
done
```

## Output
```bash
kuntal@ojha:~/linux/exp4$ ls
cse  exp1.sh  exp2.sh  exp4.sh  file.txt  student
kuntal@ojha:~/linux/exp4$ chmod 777 exp4.sh
kuntal@ojha:~/linux/exp4$ ./exp4.sh cse student exp1.sh exp2.sh
cse is a directory
student is a directory
exp1.sh is a file
Number of lines in exp1.sh:
15
exp2.sh is a file
Number of lines in exp2.sh:
16
kuntal@ojha:~/linux/exp4$
```
