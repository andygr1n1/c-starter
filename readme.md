# Compile code  
gcc init.c -o init
make init
# Run code
./init

# Run code with code runner 
Shift+Space

# Compile code with clang
clang week1__2.c utils.c -o week1__2
clang week1__2__conditional.c utils.c -o week1__2__conditional

gcc week1__2__conditional.c -o week1__2__conditional

gcc week1__2__conditional.c -o week1__2__conditional -lcs50