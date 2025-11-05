---
outline: deep
---

# Experiment 5

## Question
- **Write a shell script that accepts a list of file names as its arguments, counts and reports the occurrence of each word that is present in the first argument file on other argument files.**

## Program
```bash [exp-5.sh]
#!/bin/bash

if [ $# -ne 2 ]
then
echo "Error : Invalid number of arguments."
exit
fi

str=`cat $1 | tr '\n' ' '`

for a in $str
do
echo "Word = $a, Count = `grep -c "$a" $2`"
done
```

## Output
```bash
kuntal@ojha:~/linux/exp5$ ls
comp.txt  data.txt  exp5.sh
kuntal@ojha:~/linux/exp5$ chmod 777 exp5.sh
kuntal@ojha:~/linux/exp5$ ./exp5.sh data.txt comp.txt
Word = apple, Count = 0
Word = banana, Count = 2
Word = cat, Count = 0
Word = dog, Count = 0
Word = man, Count = 2
kuntal@ojha:~/linux/exp5$
```
