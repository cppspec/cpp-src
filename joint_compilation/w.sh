set -v
# variant 1
g++ main.cpp all_func.cpp -o v1.exe

# variant 1a
g++ *.cpp -o v1a.exe

# variant 2
g++ -c main.cpp
g++ -c all_func.cpp
ls -lah *.o
g++ main.o all_func.o -o v2.exe
rm *.o

# variant 2a
g++ -c *.cpp
ls -lah *.o
g++ main.o all_func.o -o v2a.exe
rm *.o

# varian 3 
g++ -c all_func.cpp
ls -lah *.o
g++ main.cpp all_func.o -o v3.exe
rm *.exe

# variant 4
g++ -c main.cpp
icpc -c all_func.cpp
ls -lah *.o
g++ main.o all_func.o -o v2.exe
rm *.o

