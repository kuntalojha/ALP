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

```