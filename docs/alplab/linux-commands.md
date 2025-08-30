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

## **11. `mkdir` Command**
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

## **12. `cd` Command**
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

## **13. `rmdir` Command**
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

## **14. `rm` Command**
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

## **15. `cp` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **16. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **17. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **18. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **19. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **20. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

## **21. ` ` Command**
### **Purpose:**
  - 
### **Syntax:**
  - ` `
### **Example:**
- 

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




