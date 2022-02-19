#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *ThreadFunction(){
for(int i=0; i<15; i++){
printf("This is a thread function by fadil\n");
sleep(1);
}
return NULL;
}

int main(){
pthread_t thread; 
int status; 
status = pthread_create(&thread, NULL, ThreadFunction, NULL);


if(!status){
printf("Custom Created Sucessfully");
}else{
printf("Unable to create the Custom Thread.\n");
return 0;
}

for(int i = 0;i<15;i++){
printf("This is a proccess thread function by fadil\n");
sleep(1);
}
return 0;

}