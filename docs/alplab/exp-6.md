---
outline: deep
---

# Experiment 6:

## Question:
- **Write a shell script to list all of the directory files in a directory.**

## Program:
```bash [exp-6.sh]
#!/bin/bash

echo "Enter directory name"
read dir

for file in $dir/*
do echo $file
done
```

## Output
```bash
kuntal@ojha:~/linux/exp6$ ls
cse  exp6.sh  student
kuntal@ojha:~/linux/exp6$ cd student/
kuntal@ojha:~/linux/exp6/student$ ls
file1.txt  file2.txt
kuntal@ojha:~/linux/exp6/student$ cd ..
kuntal@ojha:~/linux/exp6$ chmod 777 exp6.sh
kuntal@ojha:~/linux/exp6$ ./exp6.sh
Enter directory name
student
student/file1.txt
student/file2.txt
kuntal@ojha:~/linux/exp6$ ./exp6.sh
Enter directory name
cse
cse/textFile.txt
kuntal@ojha:~/linux/exp6$
```
