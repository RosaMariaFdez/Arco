#include <stdio.h> 
#include <omp.h> 

/*
void main() 
{ 
    int product = 1; 
    //shared variable 
    omp_set_num_threads(4); 
    #pragma omp parallel 
    { 
        int id = omp_get_thread_num(); 
        //private variable 
        #pragma omp atomic
        { 
            product = product * (id + 1); 
        } 
        printf("The thread %d get the result %d\n", id+1, product); 
    } printf("The result is %d", product); 
}*/

void main()
{ 
    int product = 1; 
    //shared variable 
    omp_set_num_threads(4); 
    #pragma omp parallel 
    { 
        int id = omp_get_thread_num(); 
        #pragma omp atomic 
        { 
            product = product * (id + 1); 
        } 
            printf("The thread %d get the result %d\n", id+1, product); 
    } 
            printf("The result is %d", product); 
}