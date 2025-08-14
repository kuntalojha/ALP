---
outline: deep
---

# Advanced Linux Programming

## Module 1:
- **Linux Utilities** - File handling utilities, Security by file permissions, Process utilities, Disk utilities, 
Networking commands, Filters, Text processing utilities and Backup utilities. 
Sed – scripts, operation, addresses, commands, applications, awk – execution, fields and records, 
scripts, operation, patterns, actions, functions, using system commands in awk.

## Module 2:
- **Working with the Bourne-again-shell (bash):** Introduction, shell responsibilities, pipes and 
input Redirection, output redirection, here documents, running a shell script, the shell as a 
programming language, shell Meta characters, and file name substitution. 
Shell variables, command substitution, shell commands, the environment, quoting, test 
command, control structures, arithmetic in shell, shell script examples, interrupt processing, 
functions, debugging shell scripts. 

## Module 3:
- **Files:** - File Concept, File System Structure, I-nodes, File Attributes, File types, Library 
functions, the standard I/O and formatted I/O in C, stream errors, kernel support for files, 
System calls, file descriptors, low level file access – File structure related system calls (File 
APIs), file and record locking, file and directory management – Directory file APIs, Symbolic 
links & hard links. 

- **Process** – Process concept, Kernel support for process, process attributes, process control - 
process creation, waiting for a process, process termination, zombie process, orphan process, 
Process APIs.

## Module 4:
- **Signals** – Introduction to signals, Signal generation and handling, Kernel support for signals, 
Signal function, unreliable signals, reliable signals, kill, raise, alarm, pause, abort, sleep 
Functions, Intercrosses Communication: Introduction to IPC, Pipes and FIFOs, Introduction to three types of IPC-message queues, semaphores, and shared memory. 

- **Message Queues** - Kernel support for messages, UNIX system V APIs for messages, client/server 
example, Semaphores-Kernel support for semaphores, UNIX system V APIs for semaphores, 
Shared Memory- Kernel support for shared memory, UNIX system V APIs for shared memory, 
semaphore and shared memory example. 


## Module 5:
- **Multithreaded Programming:** Differences between threads and processes, Thread structure 
and uses, Threads and Lightweight Processes, POSIX Thread APIs, Creating Threads, Thread 
Attributes, Thread Synchronization with semaphores and with Mutexes, Example programs. 

- **Sockets:** Introduction to Sockets, Socket Addresses, Socket system calls for connection
oriented protocol and connectionless protocol, example-client/server programs.


# Advanced Linux Programming Lab

## Experiment 1:
- Write a shell script that accepts a file name, starting and ending line numbers as 
arguments and displays all the lines between the given line numbers. 

## Experiment 2:
- Write a shell script that deletes all lines containing a specified word in one or more 
files supplied as arguments to it.

## Experiment 3:
- Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.
. 
## Experiment 4:
- Write a shell script that receives any number of file names as arguments checks if 
every argument supplied is a file or a directory and reports accordingly. Whenever 
the argument is a file, the number of lines on it is also reported. 


## Experiment 5:
- Write a shell script that accepts a list of file names as its arguments, counts and 
reports the occurrence of each word that is present in the first argument file on other 
argument files. 

## Experiment 6:
- Write a shell script to list all of the directory files in a directory.

## Experiment 7:
- Write a shell script to find factorial of a given number.

## Experiment 8: 
- Write an awk script to count the number of lines in a file that do not contain  vowels. 

## Experiment 9:
- Write an awk script to find the number of characters, words and lines in a file.

## Experiment 10:    
- Write a c program that makes a copy of a file using standard I/O and system calls. 

## Experiment 11:     
- Implement in C the following UNIX commands using System calls 
 A.cat B.ls C.mv 

## Experiment 12:     
- Write a program that takes one or more file/directory names as command line input 
and reports the following information on the file. 
A. File type. B. Number of links. 
C. Time of last access. D. Read, Write and Execute permissions. 

## Experiment 13:     
- Write a C program to emulate the UNIX ls l command. 

## Experiment 14:     
- Write a C program to list for every file in a directory, its inode number and file name. 

## Experiment 15:     
- Write a C program that demonstrates redirection of standard output to a file.  
Ex: ls > f1. 

## Experiment 16:     
- Write a C program to create a child process and allow the parent to display and the child to display  on the screen. 

## Experiment 17:     
- Write a C program to create a Zombie process. 

## Experiment 18:     
- Write a C program that illustrates how an orphan is created. 

## Experiment 19:     
- Write a C program that illustrates how to execute two commands concurrently with a command pipe. Ex: - ls l | sort 

## Experiment 20:     
- Write C programs that illustrate communication between two unrelated processes using named pipe. 

## Experiment 21:     
- Write a C program to create a message queue with read and write permissions to write three messages to it with different priority numbers. 

## Experiment 22:     
- Write a C program that receives the messages (from the above message queue as specified in (21)) and displays them. 

## Experiment 23:     
- Write a C program that illustrates suspending and resuming processes using signals. 

## Experiment 24:     
- Write a C program that implements a producer-consumer system with two processes. 
(Using Semaphores). 

## Experiment 25:    
- Write client and server programs (using c) for interaction between server and client processes using Unix Domain sockets. 

## Experiment 26:     
- Write client and server programs (using c) for interaction between server and client processes using Internet Domain sockets. 

## Experiment 27:     
- Write a C program that illustrates two processes communicating using shared memory.