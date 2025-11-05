---
outline: deep
---
# Experiment 9:

## Question:
- **Write an awk script to find the number of characters, words and lines in a file.**

## Program:
```bash [exp-9.sh]
#!/bin/bash

# Prompt for input file
echo "Enter the filename:"
read file

# Run AWK script on the given file
awk '
{
    lines++
    words += NF
    chars += length($0) + 1
}
END {
    print "Lines:", lines
    print "Words:", words
    print "Chars:", chars
}' "$file"

```


## Output
```bash
kuntal@ojha:~/linux/exp9$ ls
data.text  exp9.sh
kuntal@ojha:~/linux/exp9$ cat data.text
Hello world
This is a test file
kuntal@ojha:~/linux/exp9$ chmod 777 exp9.sh
kuntal@ojha:~/linux/exp9$ ./exp9.sh
Enter the filename:
data.text
Lines: 2
Words: 7
Chars: 32
kuntal@ojha:~/linux/exp9$
```
