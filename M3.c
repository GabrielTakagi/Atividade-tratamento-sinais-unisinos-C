//Nome: Gabriel Kento Toledo Takagi  Registro Academico:1929933

#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

volatile 

void s2_handler(int sig){
    char url[100];

    printf("\n informe o url: ");
    scanf("%119s", url);
    execlp("firefox", "firefox", url, NULL);
}

int main(){
    struct sigaction act;

    act.sa_handler = s2_handler;
    sigemptyset(&act.sa_mask);
    act.sa_flags = 0;

    sigaction(SIGINT, &act, 0);
    

    while (1)
    {
        printf("pocesso aberto \n");
        sleep(1);
    }
    
    return 0;

}