---
outline: deep
---

# Experiment 7:

## Question:
- Write a shell script to find factorial of a given number.

## Program:
```bash [exp7.sh]
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