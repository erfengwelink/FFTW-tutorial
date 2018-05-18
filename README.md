# FFTW-tutorial
This repository is intend to show a guide to use FFTW3 library 


# platform:
MAC OSX

$ brew install fftw

# Compilation instructions:

gcc -o main main.c -lfftw3

$ just like follow:

➜  FFTW-tutorial git:(master) ✗ gcc -o main main.c -lfftw3 

➜  FFTW-tutorial git:(master) ✗ ls

README.md main      main.c

➜  FFTW-tutorial git:(master) ✗ ./main

In:

1.000000 0.000000

5.000000 0.000000

3.000000 0.000000


Out:

9.000000 0.000000

-3.000000 -1.732051

-3.000000 1.732051
