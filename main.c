#include <fftw3.h>
#include <stdio.h>

#define N 3
#define ELEM(r) (r)

int showresult(fftw_complex* in,fftw_complex* out)
{
    int i;
    printf("In:\n");
    for(i=0;i<N;i++){
            printf("%lf %lf\n",in[ELEM(i)][0],in[ELEM(i)][1]);
    }
    printf("\n");
    printf("Out:\n");
    for(i=0;i<N;i++){
            printf("%lf %lf\n",out[ELEM(i)][0],out[ELEM(i)][1]);
    }
    return 1;
}

int main()
{
    fftw_complex *in,*out;
    fftw_plan p;
    int i;

    in=(fftw_complex*)fftw_malloc(sizeof(fftw_complex)*N);
    out=(fftw_complex*) fftw_malloc(sizeof(fftw_complex)*N);

    p=fftw_plan_dft_1d(N,in,out,FFTW_FORWARD,FFTW_ESTIMATE);
    for(i=0;i<N;i++){
            in[ELEM(i)][0]=1;
            in[ELEM(i)][1]=0;
    }
    in[ELEM(1)][0]=5;
    in[ELEM(2)][0]=3;

    fftw_execute(p);

    showresult(in,out);

    fftw_destroy_plan(p);
    fftw_free(in);
    fftw_free(out);

    return 1;
}
