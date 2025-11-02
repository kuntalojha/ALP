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

```