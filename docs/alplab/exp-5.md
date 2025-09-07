---
outline: deep
---

# Experiment 5

## Question
- Write a shell script that accepts a list of file names as its arguments, counts and 
reports the occurrence of each word that is present in the first argument file on other 
argument files.

## Program
```bash [exp5.sh]
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