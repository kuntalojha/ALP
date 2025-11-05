---
outline: deep
---

# Experiment 8:

## Question:
- **Write an awk script to count the number of lines in a file that do not contain vowels.**

## Program:
```bash [exp-8.sh]
#!/usr/bin/awk -f

# Count lines that do NOT contain vowels
!/a|e|i|o|u|A|E|I|O|U/ {
  count++
}

END {
  print "Number of lines without vowels =", count
}
```

## Output:
```bash
kuntal@ojha:~/linux/exp8$ cat data.text
one 
abcd
two
pqrs
three
lmnop
four
five
six
abcd


kuntal@ojha:~/linux/exp8$ chmod 777 exp8.sh
kuntal@ojha:~/linux/exp8$ ./exp8.sh data.text
Number of lines without vowels = 3
kuntal@ojha:~/linux/exp8$ 
```

