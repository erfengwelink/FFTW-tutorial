# FFTW-tutorial
This repository is intend to show a guide to use FFTW3 library 


# platform:
MAC OSX

$ brew install fftw

# Compilation instructions:

gcc -o main main.c -lfftw3

$ just like follow:

## main.c:

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

## demo.c:

➜  FFTW-tutorial git:(master) ✗ gcc -o demo demo.c -lfftw3

➜  FFTW-tutorial git:(master) ✗ ls

README.md demo      demo.c    main      main.c

➜  FFTW-tutorial git:(master) ✗ ./demo

0.868345

0.934584

1.01441

1.11207

1.23383

64.513

1.59397

1.87468

2.28205

2.92463

4.08461

6.79675

20.3739

20.3739

6.79675

4.08461

2.92463

2.28205

1.87468

1.59397

1.38929

1.23383

1.11207

1.01441

0.934584

0.868345

0.812702

0.765494

0.725121

0.690372

0.66032

0.634239

0.611557

0.591819

0.574655

0.55977

0.54692

0.53591

0.526577

0.518793

0.512451

0.507471

0.503789

0.501358

0.500151

0.500151

0.501358

0.503789

0.507471

0.512451

0.518793

0.526577

0.53591

0.54692

0.55977

0.574655

0.591819

0.611557

0.634239

0.66032

0.690372

0.725121

0.765494

0.812702
