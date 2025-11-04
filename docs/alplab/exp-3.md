---
outline: deep
---

# Experiment 3

## Question
- **Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.**

## Program
```bash [exp3.sh]
#!/bin/bash

echo "List of Files with Read, Write, and Execute Permissions in Current Directory:"

for file in *; do
 if [ -f "$file" ] && [ -r "$file" ] && [ -w "$file" ] && [ -x "$file" ]; then
  echo "$file"
 fi
done
```

## Output
```bash
kuntal@ojha:~/linux/exp3$ ls -l
total 12
-rw-rw-r-- 1 kuntal kuntal   0 Sep  7 15:18 data.txt
-rwxrwxrwx 1 kuntal kuntal 288 Nov  4 22:47 exp1.sh
-rwxrwxrwx 1 kuntal kuntal 302 Nov  4 22:47 exp2.sh
-rwxrwxr-x 1 kuntal kuntal 220 Sep  7 15:51 exp3.sh
-rw-rw-r-- 1 kuntal kuntal   0 Sep  7 15:18 file.txt
kuntal@ojha:~/linux/exp3$ chmod +x exp3.sh
kuntal@ojha:~/linux/exp3$ ./exp3.sh
List of Files with Read, Write, and Execute Permissions in Current Directory:
exp1.sh
exp2.sh
exp3.sh
kuntal@ojha:~/linux/exp3$ 
```
