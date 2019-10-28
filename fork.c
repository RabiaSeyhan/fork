#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    pid_t pid;
    int n, j, x;
    printf ("Kaç kere çalışacak:\n");
    scanf ("%d",&j);
    
    printf("\n ID: %d\n",getpid());
    n = atoi(argv[1]);
    

     if (argc == 1) {
        fprintf (stderr,"\n");
        return 1;

    
        
        

    for (x=1; x <= j; x++){
        pid = fork();
        
}

        if (pid < 0) {
            fprintf(stderr, "parent görev\n");
            return -1;
        }
        else if (pid == 0) { /*child görev */
            printf("\nChild %d (ID: %d)\n",x,getpid());
            printf("\ndizisini başlat: %d\n",n);
            while (n != 1) {
                n = n % 2 ? 3 * n + 1 : n / 2;
                printf("\n(Child %d) %d ",x,n);

            }
            printf("\n\nYürütmeyi biticek (%d) .\n",getpid());
        }
        else { /* parent süreci */
            wait(NULL);
            n = n + 3;
        }
    } 
return 0;  
    
}
