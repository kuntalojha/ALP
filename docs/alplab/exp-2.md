---
outline: deep
---

# Experiment 2

## Question
- **Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.**

## Program
```bash [exp-2.sh]
#!/bin/bash

echo "Enter the file name:"
read filename

echo "The contents before deleting:"
cat "$filename"

echo "Enter the word to be deleted: "
read word

# Delete lines containing the word
grep -vi "$word" "$filename" > temp
mv temp "$filename"

echo "The contents after deleting"
cat "$filename"
```

## Output
```bash

```