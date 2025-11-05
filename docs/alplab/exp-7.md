---
outline: deep
---

# Experiment 7:

## Question:
- **Write a shell script to find factorial of a given number.**

## Program:
```bash [exp-7.sh]
#!/bin/bash

echo "Enter a number:"
read num

fact=1

for (( i=1; i<=num; i++ ))
do
  fact=$((fact * i))
done

echo "Factorial of $num is: $fact"
```

## Output
```bash
kuntal@ojha:~/linux/exp7$ chmod 777 exp7.sh
kuntal@ojha:~/linux/exp7$ ./exp7.sh
Enter a number:
5
Factorial of 5 is: 120
kuntal@ojha:~/linux/exp7$
```
