---
outline: deep
---

# Module 1

## I. Introduction to Linux: 
 
 
Linux is a Unix-like computer operating system assembled under the model of free and open 
source software development and distribution. The defining component of Linux is the Linux 
kernel, an operating system kernel first released 5 October 1991 by Linus Torvalds. 
 
Linux was originally developed as a free operating system for Intel x86-based personal 
computers. It has since been ported to more computer hardware platforms than any other 
operating system. It is a leading operating system on servers and other big iron systems such as 
mainframe computers and supercomputers more than 90% of today's 500 fastest 
supercomputers run some variant of Linux, including the 10 fastest. 

Linux also runs on 
embedded systems (devices where the operating system is typically built into the firmware and 
highly tailored to the system) such as mobile phones, tablet computers, network routers, 
televisions and video game consoles; the Android system in wide use on mobile devices is 
built on the Linux kernel.

## Linux
- Linux is a free and open-source, Unix like operating system.
- It is primarily operated through command-line interfaces, but also supports graphical user interfaces.

## Features
1. Portable
2. Open-Source
3. Multi-User
4. Multiprogramming
5. Hierarchical File System
6. Shell
7. Security

## Advantages
1. Low Cost
2. Stability
3. Performance
4. Network Friendliness
5. Flexibility
6. Compatibility
7. Choice
8. First and easy to install
9. Full use of hard disk
10. Multitasking
11. Security
12. Open-Source

 
## Basic Features  
Following are some of the important features of Linux Operating System.  
1. **Portable** - Portability means softwares can works on different types of hardwares in 
same way. Linux kernel and application programs supports their installation on any kind 
of hardware platform.
 
2. **Open Source** - Linux source code is freely available and it is community based 
development project. Multiple teams works in collaboration to enhance the capability 
of Linux operating system and it is continuously evolving.

3. **Multi-User** - Linux is a multiuser system means multiple users can access 
system resources like memory/ ram/ application programs at same time.

4. **Multiprogramming** - Linux is a multiprogramming system means multiple 
applications can run at same time.

5. **Hierarchical File System** - Linux provides a standard file structure in which system files/ user files are arranged. 
 
6. **Shell** - Linux provides a special interpreter program which can be used to execute 
commands of the operating system. It can be used to do various types of operations, call 
application programs etc.

7. **Security** - Linux provides user security using authentication features like password 
protection/ controlled access to specific files/ encryption of data


## Linux Advantages  

1. **Low cost:** You don’t need to spend time and money to obtain licenses since Linux andmuch 
of its software come with the GNU General Public License. You can start to workimmediately 
without worrying that your software may stop working anytime because thefree trial version 
expires. Additionally, there are large repositories from which you canfreely download high 
quality software for almost any task you can think of. 
 
2. **Stability:** Linux doesn’t need to be rebooted periodically to maintain performance levels. 
Itdoesn’t freeze up or slow down over time due to memory leaks and such. Continuous up
times of hundreds of days (up to a year or more) are not uncommon. 
 
3. **Performance:** Linux provides persistent high performance on workstations and 
onnetworks. It can handle unusually large numbers of users simultaneously, and can make 
oldcomputers sufficiently responsive to be useful again. 
 
4. **Network friendliness:** Linux was developed by a group of programmers over the 
Internet and has therefore strong support for network functionality; client and server 
systems can be easily set up on any computer running Linux. It can perform tasks such as 
network backups faster and more reliably than alternative systems. 
 
5. **Flexibility:** Linux can be used for high performance server applications, desktop 
applications, and embedded systems. You can save disk space by only installing the 
components needed for a particular use. You can restrict the use of specific computers by 
installing for example only selected office applications instead of the whole suite. 

6. **Compatibility:** It runs all common Unix software packages and can process all common file 
formats. 

7. **Choice:** The wide variety of Linux distributions offers users plenty of options. Each distribution is developed and maintained by a different organization, allowing you to choose the one that best suits your needs. Despite the differences, all distributions share the same core functionalities, so most software runs seamlessly across them.

 
8. **Fast and easy installation:** Most Linux distributions come with user-friendly installation 
and setup programs. Popular Linux distributions come with tools that make installation of 
additional software very user friendly as well. 
 
9. **Full use of hard disk:** Linux continues work well even when the hard disk is almost full. 

10. **Multitasking:** Linux is designed to do many things at the same time; e.g., a large printing 
job in the background won’t slow down your other work. 
 
11. **Security:** Linux is one of the most secure operating systems. “Walls” and flexible file 
access permission systems prevent access by unwanted visitors or viruses. Linux users have 
to option to select and safely download software, free of charge, from online repositories 
containing thousands of high quality packages. No purchase transactions requiring credit card 
numbers or other sensitive personal information are necessary. 
 
12. **Open Source:** If you develop software that requires knowledge or modification of the 
operating system code, Linux’s source code is at your fingertips. Most Linux applications 
are Open Source as well. 

## [Difference between UNIX and LINUX 👈](https://www.geeksforgeeks.org/linux-unix/linux-vs-unix/)

## Linux Distribution (Operating System) Names 
- A few popular names:
  1. Ubuntu Linux 
  2. Redhat Enterprise Linux 
  3. Fedora Linux 
  4. Debian Linux 
  5. Linux Mint
  6. Suse Enterprise Linux 

## Common Things Between Linux & UNIX
- Both share many common applications such as:
  1. GUI, file, and windows managers (KDE, Gnome) 
  2. Shells (ksh, csh, bash) 
  3. Various office applications such as OpenOffice.org
  4. Development tools (perl, php, python, GNU c/c++ compilers)  
  5. Posix interface 
 
## Layered Architecture: 
   ![Layered Architecture](/images/linux_architecture.jpg)
- Linux System Architecture is consists of following layers 

1. **Hardware layer:** − Hardware consists of all peripheral devices (RAM/ HDD/ CPU etc).

2. **Kernel:** − It is the core component of Operating System, interacts directly with hardware, provides low level services to upper layer components.

3. **Shell** − An interface to kernel, hiding complexity of kernel's functions from users. The shell takes commands from the user and executes kernel's functions.

4. **Utilities** − Utility programs that provide the user most of the functionalities of an operating systems.

## LINUX File system 
- Linux file structure files are grouped according to purpose. Ex: commands, data files, 
documentation. Parts of a Unix directory tree are listed below. All directories are grouped 
under the root entry "/". That part of the directory tree is left out of the below diagram.

![LINUX File system](/images/filesystem_structure.png)

**1. `/` – Root**
  - Every single file and directory starts from the root directory.
  - Only root user has write privilege under this directory.
  - Please note that /root is root user’s home directory, which is not same as /.

**2. `/bin` – User Binaries**
  - Contains binary executables.
  - Common linux commands you need to use in single-user modes are located under this directory.
  - Commands used by all the users of the system are located here.
  - For example: bash, ps, ls, ping, grep, cp.

**3. `/sbin` – System Binaries**
  - Just like /bin, /sbin also contains binary executables.
  - But, the linux commands located under this directory are used typically by system aministrator, for system maintenance purpose.
  - For example: iptables, reboot, fdisk, ifconfig, swapon

**4. `/etc` – Configuration Files**
  - Contains configuration files required by all programs.
  - This also contains startup and shutdown shell scripts used to start/stop individual programs.
  - For example: /etc/resolv.conf, /etc/logrotate.conf

**5. `/dev` – Device Files**
  - Contains device files.
  - These include terminal devices, usb, or any device attached to the system.
  - For example: /dev/tty1, /dev/usbmon0

**6. `/proc` – Process Information**
  - Contains information about system process.
  - This is a pseudo filesystem contains information about running process. For example: /proc/{pid} directory contains information about the process with that particular pid.
  - This is a virtual filesystem with text information about system resources. For example: /proc/uptime

**7. `/var` – Variable Files**
  - `var` stands for variable files.
  - Content of the files that are expected to grow can be found under this directory.
  - This includes — system log files (/var/log); packages and database files (/var/lib); emails (/var/mail); print queues (/var/spool); lock files (/var/lock); temp files needed across reboots (/var/tmp);

**8. `/tmp` – Temporary Files**
  - Directory that contains temporary files created by system and users.
  - Files under this directory are deleted when system is rebooted.

**9. `/usr` – User Programs**
  - Contains binaries, libraries, documentation, and source-code for second level programs.
  - /usr/bin contains binary files for user programs. If you can’t find a user binary under /bin, look under /usr/bin. For example: at, awk, cc, less, scp
  - /usr/sbin contains binary files for system administrators. If you can’t find a system binary under /sbin, look under /usr/sbin. For example: atd, cron, sshd, useradd, userdel
  - /usr/lib contains libraries for /usr/bin and /usr/sbin
  - /usr/local contains users programs that you install from source. For example, when you install apache from source, it goes under /usr/local/apache2

**10. `/home` – Home Directories**
  - Home directories for all users to store their personal files.
  - For example: /home/john, /home/nikita

**11. `/boot` – Boot Loader Files**
  - Contains boot loader related files.
  - Kernel initrd, vmlinux, grub files are located under /boot
  - For example: initrd.img-2.6.32-24-generic, vmlinuz-2.6.32-24-generic

**12. `/lib` – System Libraries**
  - Contains library files that supports the binaries located under /bin and /sbin
  - Library filenames are either ld* or lib*.so.*
  - For example: ld-2.11.1.so, libncurses.so.5.7

**13. /opt – Optional add-on Applications**
  - `opt` stands for optional.
  - Contains add-on applications from individual vendors.
  - add-on applications should be installed under either /opt/ or /opt/ sub-directory.

**14. `/mnt` – Mount Directory**
  - Temporary mount directory where sysadmins can mount filesystems.

**15. /media – Removable Media Devices**
  - Temporary mount directory for removable devices.
  - For examples, /media/cdrom for CD-ROM; /media/floppy for floppy drives; /media/cdrecorder for CD writer

**16. `/srv` – Service Data**
  - `srv` stands for service.
  - Contains server specific services related data.
  - For example, /srv/cvs contains CVS related data.

## Linux Utilities

## I. File Handling
---
## **1. `cat` command**

### **Purpose:**
  - The `cat` linux command used to concatenates files and print it on the standard output.

### **Syntax:**
  - `cat [OPTIONS] [FILE]..`

### **Options:**
  - `-A, --show-all` → Show all.
  - `-b` → Omits line numbers for blank space in the output
  - `-e` → A $ character will be printed at the end of each line prior to a new line.
  - `-E `→ display $ at end of each line.
  - `-n` → Line numbers for all the output lines.
  - `-s` → If the output has multiple empty lines it replaces it with one empty line.
  - `-T, --show-tabs` → Display tab characters as ^I.
  - `-v` → Display non-printing characters visibly (except tabs, newlines, and form feeds).
  - `--help` → Show help information and exit.
  - `--version` → Show version information and exit.

### **Example:**
  1. To create a new file
     - `cat > new_file.txt`
     - This command creates a new file new_file.txt.
     - Then After typing into the file press control + d (^d) simultaneously to end the file.
  2. To Append data into the file
     - `cat >> new_file.txt`
     - To append data into the same file use append operator >> to write into the file, else the file will be overwritten (i.e., all of its contents will be erased).
     - After typing into the file press control + d (^d) simultaneously to end the file.
  3. To display the contents of a file
     - `cat new_file.txt`
     - This command displays the data in the file.
  4. To display the contents of multiple files
     - `cat file1.txt file2.txt`
     - The above cat command will concatenate the two files (file1.txt and file2.txt) and it will display the output in the screen.
     - Some times the output may not fit the monitor screen. In such situation you can print those files in a new file or display the file using less command.
     - cat file1.txt file2.txt | less
  5. To concatenate several files and to transfer the output to another file
     - `cat file1.txt file2.txt > file3.txt`
     - In the above example the output is redirected to new file3.txt.
     - The cat command will create new file file3.txt and store the concatenated output into file3.txt.

