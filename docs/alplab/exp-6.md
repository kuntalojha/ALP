---
outline: deep
---

# Experiment 6:

## Question:
- Write a shell script to list all of the directory files in a directory.

## Program:
```bash [exp6.sh]
#!/bin/bash

echo "Enter directory name"
read dir

for file in $dir/*
do echo $file
done
```
