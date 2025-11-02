---
outline: deep
---

# Experiment 8:

## Question:
- Write an awk script to count the number of lines in a file that do not contain vowels.

## Program:
```bash [exp-8.sh]
#!/bin/bash

# Check if exactly one argument is provided
if [ $# -ne 1 ]
then
  echo "Usage: ./bash_filename.sh <file_name>"
  exit 1
fi

# Run AWK command
awk '
BEGIN {
  line_count = 0
}
# Match lines that do NOT contain vowels (a, e, i, o, u)
!/[aeiouAEIOU]/ {
  line_count++
  print
}
END {
  printf "Number of lines which do not contain vowels = %d\n", line_count
}
' "$1"
```

## Output:
```bash

```

