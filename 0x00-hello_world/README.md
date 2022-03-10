# General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

# Requirements
C
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

# Shell Scripts
* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long ($ wc -l file should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly #!/bin/bash

# More Info
# Betty linter
To run the Betty linter just with command betty <filename>:
* Go to the Betty repository
* Clone the repo to your local machine
* cd into the Betty directory
* Install the linter with sudo ./install.sh
* emacs or vi a new file called betty, and copy the script below:
\#!/bin/bash<br>
\# Simply a wrapper script to keep you from having to use betty-style<br>
\# and betty-doc separately on every item.<br>
\# Originally by Tim Britton (@wintermanc3r), multiargument added by<br>
\# Larry Madeo (@hillmonkey)<br>
<br>
BIN_PATH="/usr/local/bin"<br>
BETTY_STYLE="betty-style"<br>
BETTY_DOC="betty-doc"<br>
<br>
if [ "$#" = "0" ]; then<br>
    echo "No arguments passed."<br>
    exit 1<br>
fi<br>
<br>
for argument in "$@" ; do<br>
    echo -e "\n========== $argument =========="<br>
    ${BIN_PATH}/${BETTY_STYLE} "$argument"<br>
    ${BIN_PATH}/${BETTY_DOC} "$argument"<br>
done<br>
  
* Once saved, exit file and change permissions to apply to all users with chmod a+x betty<br>
* Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/<br>
You can now type betty <filename> to run the Betty linter!
