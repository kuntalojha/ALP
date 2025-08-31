---
outline: deep
---

# Linux Commands

## **1. `login` Command**
### **Purpose:**
  - `login` command is used to login to the system
### **Syntax:**
  - `login  [username]`
### **Example:**
- ```bash
   root@ojha:~# login
   ojha login: kuntal
   password: *******
   kuntal@ojha:~$ 
  ```

## **2. `logout` Command**
### **Purpose:**
  - Exit from login sell or the login system.
### **Syntax:**
  - `logout`
### **Example:**
- ```bash
   root@ojha:~# logout
   kuntal@ojha:~$ 
  ```

## **3. `who` Command**
### **Purpose:**
  - Print information about users who are currently logged in.
### **Syntax:**
  - `who [OPTIONS]... [FILE | ARG1 ARG2] `
### **Example:**
- ```bash
   kuntal@ojha:~$ who
   kuntal seat0 2025-08-02 12:00 (login screen)
   root tty2 2025-08-02 12:45
   ```

## **4. `whoami` Command**
### **Purpose:**
  - Print the username of the current user.
### **Syntax:**
  - `whoami [OPTIONS].`
### **Example:**
- ```bash
   root@ojha:~# whoami
   root
   ```

## **5. `cal` Command**
### **Purpose:**
  -  Cal displays a simple calendar.If arguments are not specified, the current month will be displayed. 
### **Syntax:**
  - `cal [general options] [[month] year]`
### **Example:**
```bash
   kuntal@ojha:~$ cal

   August 2025
   Su Mo Tu We Th Fr Sa
                  1  2
   3  4  5  6  7  8  9
  10 11 12 13 14 15 16
  17 18 19 20 21 22 23
  24 25 26 27 28 29 30
  31
```

## **6. `date` Command**
### **Purpose:**
  - Display date and time in the given FORMAT.
### **Syntax:**
  - `date [OPTION]... [+FORMAT]`
### **Example:**
- ```bash
   root@ojha:~# date
   Thu Aug  28 11:12:44 PM IST 2025
   ```

## **7. `uname` Command**
### **Purpose:**
  - Print certain system information.
### **Syntax:**
  - `uname [OPTION]...`
### **Example:**
- ```bash
   kuntal@ojha:~$ uname
   Linux
   ```

## **8. `man` Command**
### **Purpose:**
  - man is a command which displays the manual page for a command.
### **Syntax:**
  - `man [OPTION] [SECTION] [COMMAND]`
### **Example:**
- ```bash
   kuntal@ojha:~$ man ls
  ```

## **9. `pwd ` Command**
### **Purpose:**
  - `pwd` command is used to print the name of the  current working directory.
### **Syntax:**
  - `pwd`
### **Example:**
- ```bash
   root@ojha:~# pwd
   /home/kuntal
   ```
## **10. `ls ` Command**
### **Purpose:**
  - `ls` command is used to list the contents of a directory.
### **Syntax:**
  - ` ls [OPTION].. [FILE]..`
### **Example:**
- ```bash
  kuntal@ojha:~ $ ls
  Desktop Documents Downloads hello_world.sh
  ```

- ```bash
  kuntal@ojha:~ $ ls -a
  . .. Desktop Documents Downloads hello_world.sh
  ```
  
- ```bash
  kuntal@ojha:~$ ls -l
  total 10
  drwxr-xr-x 2 kuntal kuntal 4096 Jul 21 13:00 Desktop
  drwxr-xr-x 4 kuntal kuntal 4096 Jul 21 22:00  Documents
  drwxr-xr-x 2 kuntal kuntal 4096 Jul 21 12:26 Downloads
  -rw-r-xr-x 2 kuntal kuntal 4096 Jul 21 12:26 hello_world.sh
  ```
- ```bash
  kuntal@ojha:~$ ls -al
  total 15
  drwxrwxr-x 2 kuntal kuntal 4096 Jul 21 12:26 .
  drwxr-xr-x 3 kuntal kuntal 4096 Jul 21 12:26 ..
  drwxr-xr-x 2 kuntal kuntal 4096 Jul 21 13:00 Desktop
  drwxr-xr-x 4 kuntal kuntal 4096 Jul 21 22:00  Documents
  drwxr-xr-x 2 kuntal kuntal 4096 Jul 21 12:26 Downloads
  -rw-r-xr-x 2 kuntal kuntal 4096 Jul 21 12:26 hello_world.sh
  ```

## **11. `chmod ` Command**
### **Purpose:**
- The `chmod` command is used to change the permissions of a file or directory.
### **Syntax:**
- `chmod [OPTION]...MODE[MODE] [FILE]...`
### **Example:**
- ```bash
   kuntal@ojha:~$ ls  
   Desktop Documents Downloads hello_world.sh
   kuntal@ojha:~$ chmod 777 hello_world.sh
   ```
## **12. `mkdir` Command**
### **Purpose:**
  - `mkdir` command is used to create a directory.
### **Syntax:**
  - `mkdir [OPTION]... DIRECTORY...`
### **Example:**
- ```bash
   root@ojha:~# mkdir test
   root@ojha:~# ls
   test
   ```

## **13. `cd` Command**
### **Purpose:**
  - `cd` command is used to change the current directory.
### **Syntax:**
  - `cd [dir]`
### **Example:**
- ```bash
    kuntal@ojha:~$ cd test
    kuntal@ojha:~/test$
  ```
- ```bash
    kuntal@ojha:~/test$ cd ..
    kuntal@ojha:~$
  ```
- ```bash
    kuntal@ojha:~/Desktop$ cd ~
    kuntal@ojha:~$
  ```

## **14. `rmdir` Command**
### **Purpose:**
  - The `rmdir` command is used to remove an empty directory.
### **Syntax:**
  - `rmdir [OPTION]... DIRECTORY...`
### **Example:**
- ```bash
   kuntal@ojha:~$ ls
   test
   kuntal@ojha:~$ rmdir test
   ```

## **15. `rm` Command**
### **Purpose:**
  - The `rm` command is used to remove a file.
### **Syntax:**
  - `rm [OPTION]... [FILE]...`
### **Example:**
- ```bash
   kuntal@ojha:~$ ls
   test new_file.txt
   kuntal@ojha:~$ rm test
   test: cannot remove 'test': Is a directory 
   kuntal@ojha:~$ rm new_file.txt
   ```
- ```bash
   kuntal@ojha:~$ ls
   test hello_world.sh
   kuntal@ojha:~$ rm -r test
   kuntal@ojha:~$ ls
   hello_world.sh
   ```
- ```bash
   kuntal@ojha:~$ ls
   hello_world.sh books
   kuntal@ojha:~$ cd books
   kuntal@ojha:~/books$ ls
   book1.txt book2.txt
   kuntal@ojha:~/books$ cd ..
   kuntal@ojha:~$ rm -rf books
   kuntal@ojha:~$ ls
   hello_world.sh
   ```

## **16. `cp` Command**
### **Purpose:**
  - `cp` command is used to copy a file.
### **Syntax:**
  - `cp [OPTION]... SOURCE DIRECTORY`
### **Example:**
- ```bash
   kuntal@ojha:~$ ls
   hello.txt new_file.txt
   kuntal@ojha:~$ cp hello.txt new_file.txt
   ```
- ```bash
   kuntal@ojha:~$ ls
   hello.txt Desktop
   kuntal@ojha:~$ cd Desktop
   kuntal@ojha:~/Desktop$ ls
   book.txt
   kuntal@ojha:~/Desktop$ cd ..
   kuntal@ojha:~$ cp hello.txt Desktop
   kuntal@ojha:~$ cd Desktop
   kuntal@ojha:~/Desktop$ ls
   book.txt hello.txt
   kuntal@ojha:~/Desktop$ cd ..
   kuntal@ojha:~$ ls
   hello.txt
   ```

## **17. `mv` Command**
### **Purpose:**
  - `mv` command is used to move a file.
### **Syntax:**
  - `mv [OPTION]... SOURCE DIRECTORY`
### **Example:**
- ```bash
   kuntal@ojha:~$ ls
   Desktop file.txt
   kuntal@ojha:~$ mv file.txt Desktop
   kuntal@ojha:~$ ls
   Desktop
   ```

## **18. `cat` Command**

### **Purpose:**
  - The `cat` linux command used to concatenates files and print it on the standard output.

### **Syntax:**
  - `cat [OPTIONS] [FILE]..`
### **Example:**
- ```bash
   root@ojha:~# cat hello_world.sh
   #!/bin/bash
   echo "hello world"
   root@ojha:~# 
  ```
## **19. `comm` Command**
### **Purpose:**
  - The `comm` command is used to compare two files line by line.
### **Syntax:**
  - `comm [OPTION]... FILE1 FILE2`
### **Example:**
<!-- - ```bash
   root@ojha:~# cat file1.txt
   line1
   line2
   line3
   root@ojha:~# cat file2.txt
   line1
   line2
   line4    
   root@ojha:~# comm file1.txt file2.txt  
                   line1
                   line2
   line3
         line4

   root@ojha:~#
  ```  -->
## **20. `diff` Command**
### **Purpose:**
  - The `diff` command is used to compare two files line by line.
### **Syntax:**
  - `diff [OPTION]... FILES`
### **Example:**
- ```bash
   root@ojha:~# cat file1.txt
   line1
   line2
   line3
   root@ojha:~# cat file2.txt
   line1
   line2
   line4    
   root@ojha:~# diff file1.txt file2.txt  
   3c3
   < line3
   ---
   > line4
  ```
## **21. `wc` Command**
### **Purpose:**
  - The `wc` command is used to count the number of lines, words and characters in a file.
### **Syntax:**
  - `we [OPTION]... [FILE]...`
### **Options:**
  - `-l` print the newline counts
  - `-w` print the word counts
  - `-c` print the byte counts
  - `-m` print the character counts
### **Example:**
- ```bash
   root@ojha:~# cat file.txt
   line1
   line2
   line3
   root@ojha:~# wc file.txt
   3 3 18 file.txt
  ```
  3 lines, 3 words, 18 bytes in file.txt

## **22. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **23. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **24. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **25. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **26. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **27. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **28. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **29. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **30. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **31. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **32. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **33. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
-

## **34. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
-

## **35. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
-

## **36. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **37. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
-

## **38. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 
## **39. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **40. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 




