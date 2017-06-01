#include <stdio.h>

int main(int argc, char * argv[]){
  printf("Hello\n");
  char temp[4][32];
  char final_str[128];
  for(int i=0;i<4;i++){
    snprintf(temp[i], 32, " [Hello %d] ", i);
    printf("temp %s\n" , temp[i]);
    snprintf(final_str, 128, "%s : %s", final_str, temp[i]);
  }
  printf("final %s\n" , final_str);
}
