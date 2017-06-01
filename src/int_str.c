#include <stdio.h>
#include <inttypes.h>

void number2str(){
   uint64_t in = 5188;
   unsigned char *out = (unsigned char*)malloc(sizeof(uint64_t));
   sprintf(out, "%" PRIu64, in);
   printf("number:%d to string:%s\n", in, out);
}

void str2number(){
   unsigned char* in = "5188";
   uint64_t out;
   sscanf(in, "%" SCNu64, &out);
   printf("str:%s to number:%d\n", in, out);
}

int main(int argc, char* argv[]){
   number2str();
   str2number();
}
